// C++ solution of DAY-4(Number Complement)

// Problem statement and link of the question is provided in readme file

class Solution {
public:
    int findComplement(int num) {
        
        int n = log2(num) + 1;
       
        int mask = (unsigned)(1 << n) - 1;
        
        int ans = num^mask;
        
        return ans;
        
    }
};
