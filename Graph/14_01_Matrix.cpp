class Solution {//leetcode 542
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> arr = {{1 , 0}, {-1 , 0} , {0 , 1} , { 0 , -1}};
        vector<vector<int>> ans(m, vector<int>(n, -1));
        queue<pair<int, int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    q.push({ i , j });
                    ans[i][j] = 0;
                }
            }
        }
        while (!q.empty()) {
            pair<int, int> temp = q.front();
            int tempRow = temp.first;
            int tempCol = temp.second;
            q.pop();
            for(int i = 0 ; i < arr.size(); i++){ //learn this way of solving question
                int row = tempRow + arr[i][0];
                int col = tempCol + arr[i][1];

                if(row >= 0 && col >=0 && row < m && col < n && ans[row][col] == -1){
                    ans[row][col] = ans[tempRow][tempCol] + 1;
                    q.push({row, col});
                }
            }
        }
        return ans;
    }
};