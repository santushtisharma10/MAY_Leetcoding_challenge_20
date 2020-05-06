// C++ solution of Day-6(Majority Element)

// Problem statement and the link of the question is given in readme file

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int ans;
        
        multiset<int> s(nums.begin(), nums.end());
        
        int n = nums.size();
        
        for(int i = 0 ;i < n ;i += s.count(nums[i]) )
        {
            if(s.count(nums[i]) > floor(n/2))
            {  
                ans = nums[i];
                break;
            }
        }
        
        return ans;
    }
};
