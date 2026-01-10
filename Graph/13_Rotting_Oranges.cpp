class Solution {
public://lletcode 994
    int orangesRotting(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size(),  n = grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(m , vector<bool>(n , false));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2){
                    q.push({i , j});
                    visited[i][j] = true;
                }
            }
        }
        int temp = q.size();
        int count = 0;
        while(! q.empty()){// i use bfs here
            if(count == temp){
                ans++;// this is just like counting level of tree
                temp = q.size();// keep in mind this tecqniue brother
                count = 0;
            }
            count++;
            pair<int,int> temp = q.front();
            int row = temp.first;
            int col = temp.second;
            q.pop();
            if( row+1 < m && !visited[row+1][col] && grid[row+1][col] == 1){
                q.push({row+1 , col});
                visited[row+1][col] = true;
            }
            if( row-1 >= 0 && !visited[row-1][col] && grid[row-1][col] == 1){
                q.push({row-1 , col});
                visited[row-1][col] = true;
            }
            if( col+1 < n && !visited[row][col+1] && grid[row][col+1] == 1){
                q.push({row , col+1});
                visited[row][col+1] = true;
            }
            if( col-1 >= 0 && !visited[row][col-1] && grid[row][col-1] == 1){
                q.push({row , col-1});
                visited[row][col-1] = true;
            }
        }//if any 1 left which is not connect to anyone 
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    if(!visited[i][j]) return -1;
                }
            }
        }
        return ans;
    }
};