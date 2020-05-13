// C++ solution of Day-11(Flood Fill)

// Problem statement and the link of the question is provided in readme file

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int prev=image[sr][sc];
        
        if(image[sr][sc] == newColor) return image;
        
        fill(image, sr, sc, prev, newColor);
        
        return image;
    }
    void fill(vector<vector<int>>& image, int sr, int sc, int prev, int newColor)
    {
        
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || image[sr][sc] != prev)
            return;
        
        
        image[sr][sc]=newColor;
    
        fill(image, sr-1, sc, prev, newColor);
        fill(image, sr+1, sc, prev, newColor);
        fill(image, sr, sc+1, prev, newColor);
        fill(image, sr, sc-1, prev, newColor);
            
    }
};
