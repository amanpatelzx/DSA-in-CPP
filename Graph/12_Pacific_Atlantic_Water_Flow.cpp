class Solution {// leetcode 417
public:
    void dfs(vector<vector<int>>&heights , vector<vector<bool>>&temp, int row , int col){
        if(row < 0 || col < 0 || row >= heights.size() || col >= heights[0].size()) return;
        temp[row][col] = true;

        if(row+1 < heights.size() && heights[row+1][col] >= heights[row][col] && !temp[row+1][col]){
            dfs(heights , temp, row+1 , col);
            //never use return here if you want to continue that call,
            //becosue after return there will be no call for other
        }
        if(col+1 < heights[0].size() && heights[row][col+1] >= heights[row][col] && !temp[row][col+1]){
            dfs(heights , temp, row , col+1);
        }
        if(row-1 >= 0 && heights[row-1][col] >= heights[row][col] && !temp[row-1][col]){
            dfs(heights , temp, row-1 , col);
        }
        
        if(col-1 >= 0 && heights[row][col-1] >= heights[row][col] && !temp[row][col-1]){
            dfs(heights , temp, row , col-1);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size() , n = heights[0].size();
        vector<vector<int>>result;
        vector<vector<bool>>Pacific;
        vector<vector<bool>>Atlantic;
        Pacific.resize(m , vector<bool>(n, false));
        Atlantic.resize(m , vector<bool>(n, false));
        for(int i = 0; i < m; i++) dfs(heights ,Pacific, i , 0);
        for(int i = 0; i < n; i++) dfs(heights ,Pacific , 0 , i);

        for(int i = 0; i < m; i++) dfs(heights ,Atlantic, i , n-1);
        for(int i = 0; i < n; i++) dfs(heights ,Atlantic, m-1 , i);

        for(int i = 0; i < m ; i++){
            for(int j = 0; j < n; j++){
                if(Pacific[i][j] && Atlantic[i][j]) result.push_back({i , j});
            }
        }
        return result;
    }
};