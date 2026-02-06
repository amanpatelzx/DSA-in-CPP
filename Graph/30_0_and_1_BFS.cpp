//you can use this technique if after taking common something , 
// its weight only become in 1 or 0, then this is very efficient,
//asked in google interview;
//leetcode -> 1368. Minimum Cost to Make at Least One Valid Path in a Grid
class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        //Now this is new method , call 0 1 bfs , ans this use dequeue;
        int n = grid.size();
        int m = grid[0].size();

        int dx[] = { 0 , 0 , 1 , -1};
        int dy[] = { 1 , -1 , 0, 0};

        vector<vector<int>> dist(n , vector<int>(m , INT_MAX));

        deque<pair<int, int>> dq;
        dq.push_back({0 , 0});
        dist[0][0] = 0;

        while( !dq.empty()){
            auto curr = dq.front();
            dq.pop_front();
            int x = curr.first;
            int y = curr.second;
            int dir = grid[x][y];

            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];

                int edgeWt = 1;
                if(i + 1 == dir) edgeWt = 0;

                if(nx < n && nx >=0 && ny < m && ny >= 0){
                    if(dist[nx][ny] > dist[x][y] + edgeWt){
                        dist[nx][ny] = dist[x][y] + edgeWt;
                        if(edgeWt == 1) dq.push_back({nx , ny});
                        else dq.push_front({nx , ny});
                    }
                }
            }
        }
        return dist[n-1][m-1];
    }
};