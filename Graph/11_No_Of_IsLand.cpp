class Solution {//leeetcode 200
public:
    vector<vector<bool>> visited;
    void dfs(vector<vector<char>> &grid , int row , int col){
        if(row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size()) return ;
        if(grid[row][col] == '0'){
            visited[row][col] = true;
             return;
        }
        if(visited[row][col]) return;
        visited[row][col] = true;
        dfs(grid , row+1, col);
        dfs(grid , row-1, col);
        dfs(grid , row, col+1);
        dfs(grid , row, col-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        visited.resize(n , vector<bool>(m , false));
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(visited[i][j]) continue;
                dfs(grid , i , j);
                if(grid[i][j] == '1') ans++;
            }
        }
        return ans;
    }
};