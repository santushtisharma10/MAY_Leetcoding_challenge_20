// C++ solution of Day-3(Ransome Note)

// Problem statement and link of the question is provided in the readme file

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        bool ans = true;
        
        sort(ransomNote.begin() ,ransomNote.end());
        
        sort(magazine.begin() ,magazine.end());
        
        multiset<int> R(ransomNote.begin() ,ransomNote.end());
       
        multiset<int> M(magazine.begin() ,magazine.end());
        
        for(int i = 0 ;i <  ransomNote.length() ;i += R.count( ransomNote[i] ) )
        {
            if(R.count ( ransomNote[i]) > M.count ( ransomNote[i]))
                ans = false;
        }
        
        return ans;
    }
};
