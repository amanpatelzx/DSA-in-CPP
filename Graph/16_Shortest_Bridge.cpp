class Solution {//leetcode 934
public://https://leetcode.com/problems/shortest-bridge/
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<bool>> visited( n , vector<bool>( n, false));
        queue<pair<int,int>> q;
        bool check = false;
        for(int i = 0;  i < n; i++){// i try to find 1st element of 1
             for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    q.push({i  , j});
                    visited[i][j] = true;
                    check = true;
                    break;
                }
             }
             if(check) break;//this is very crucial line , keep in mind deeply,
        }
        vector<vector<int>> direction = { { 1 , 0} , { -1 , 0} , { 0 , 1 } , { 0 , -1}};
        queue<pair<int,int>> tempQ = q;// teken a temperary queue, wheere ill find all fisrt island
        while(!tempQ.empty()){
            auto temp = tempQ.front();
            int row = temp.first;
            int col = temp.second;
            tempQ.pop();
            
            for(int i = 0; i < 4; i++){
                int newRow = row + direction[i][0];
                int newCol = col + direction[i][1];

                if(newRow >= 0 && newCol >= 0 && newRow < n && newCol < n && !visited[newRow][newCol]){
                    if(grid[newRow][newCol] == 1){
                         visited[newRow][newCol] = true;
                         q.push({ newRow , newCol});//update all fisrt island element
                         tempQ.push({newRow , newCol});
                    }
                }
            }
        }
        int count = 0;
        int distance = 0;
        int target = q.size();
         
        while(!q.empty()){//now travel bfs on all those first island element
            if(count == target){
                distance ++;
                target = q.size();//this part update the level or direction or minimum distance
                count = 0;
            }
            count ++;
            auto temp = q.front();
            int row = temp.first;
            int col = temp.second;
            q.pop();
            for(int i = 0; i < 4; i++){
                int newRow = row + direction[i][0];
                int newCol = col + direction[i][1];

                if(newRow >= 0 && newCol >= 0 && newRow < n && newCol < n && !visited[newRow][newCol]){
                    if(grid[newRow][newCol] == 1) return distance;//here if we found any element of second island
                    visited[newRow][newCol] = true;
                    q.push({ newRow , newCol});
                }
            }
        }
        return distance;//  fake return
    }
};