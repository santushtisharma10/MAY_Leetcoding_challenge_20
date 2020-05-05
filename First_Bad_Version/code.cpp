// C++ Solution of First Bad Version

//Problem statement and link of the question is in readme file

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    long long int mid=1,l,r;
    long long int firstBadVersion(long long int n) {
        
         l=1;
         r=n;
                
        while(l<r)
        {
            mid=(l+r)/2;
            
            if(isBadVersion(mid))
            {  
                if(!isBadVersion(mid-1) || mid==1)
                {
                    break;
                }
                
                else
                    r=mid;
            }
            else
                l=mid+1;
        }
         
        if(isBadVersion(mid))
        return mid;
        
        else
            return mid+1;
        
    }
};
