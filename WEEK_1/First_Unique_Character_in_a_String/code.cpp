// C++ solution of DAY-5(First Unique Character in a String)

// Problem statement and link of the question is provided in readme file 

class Solution {
public:
    long long int firstUniqChar(string s) {
        
        unordered_map <char ,int> first;
        
        int ans = -1;
        
        for(int i = 0 ;i < s.length() ;++i)
        {
            ++first[s[i]];
        }
        
        for(int i = 0 ;i < s.length() ;++i)
        {
            if(first[s[i]] == 1)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
