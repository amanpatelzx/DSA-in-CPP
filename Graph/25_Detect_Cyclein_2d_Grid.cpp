class Solution {//leetcode 1559
public://application of dfs cycle detection keep in mind
    vector<vector<bool>> visited;
    vector<vector<int>> direction = {{1 , 0} , { -1 , 0} , {0 , 1} , { 0 , -1}};
    bool dfs(vector<vector<char>>&grid , int row , int col , int father){
        int idxOfCurr = row*(grid[0].size()) + col;
        visited[row][col] = true;
        for(int i = 0; i < 4; i++){
            int newRow = row + direction[i][0];
            int newCol = col + direction[i][1];
            
            if( newRow >=0 && newCol >= 0 && newRow < grid.size() && newCol < grid[0].size()){
                int idxOfNext = newRow*(grid[0].size()) + newCol;
                bool result;
                if(visited[newRow][newCol] && grid[newRow][newCol] == grid[row][col] && idxOfNext != father) return true;
                if(!visited[newRow][newCol] && grid[newRow][newCol] == grid[row][col]){
                    result = dfs(grid ,newRow , newCol , idxOfCurr);
                    if(result) return true;
                }
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        visited.resize(m , vector<bool>( n , false));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!visited[i][j]) if(dfs(grid , i , j , -1)) return true;
            }
        }
        return false;
    }
};