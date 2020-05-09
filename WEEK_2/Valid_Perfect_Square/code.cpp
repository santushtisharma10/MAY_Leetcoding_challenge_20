// C++ solution of Day-9(Valid Perfect Square)

// Problem statement and link of the question is provided in the link

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        bool ans=true;
        
        long long int sq_root=pow(num,0.5);
        
        if(sq_root*sq_root != num)
            ans=false;
        
        return ans;
        
    }
};
