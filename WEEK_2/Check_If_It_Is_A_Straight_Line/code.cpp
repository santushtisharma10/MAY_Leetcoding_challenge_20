// C++ solution of Day-8(Check If It Is a Straight Line)

// Problem statement and link of the question is provided in readme 

class Solution {
public:
    float slope(int x1, int y1, int x2, int y2)
    {
        if(x1 == x2)
            return 100000;
        
        else
            return (float)(y2 - y1)/(x2 - x1) ;
    }
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        bool ans = true;
        
        //int d1=;
        float m1 = slope(coordinates[0][0], coordinates[0][1], coordinates[1][0], coordinates[1][1]);
        
        for(int i = 1; i < coordinates.size()-1; ++i)
        {
            float m2 = slope(coordinates[i][0], coordinates[i][1], coordinates[i+1][0], coordinates[i+1][1]);
            
            if(m1 != m2)
            {
                ans = false;
                break;
            }
        }
        
        return ans;
    }
};
