// C++ solution of Day-2 question(Jewels and Stones)

//Problem statement and the link of question is provided in readme file

class Solution {
public:
    long long int numJewelsInStones(string J, string S) {
        
        multiset<char> s(S.begin(),S.end());
        
        long long int num=0;
        
       // sort(J.begin())
        
        for(int i=0;i<J.length();i++)
            num+=s.count(J[i]);
        
        return num;
    }
};
