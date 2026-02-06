class Solution {//1368. Minimum Cost to Make at Least One Valid Path in a Grid
public:
    typedef pair<int , int> P;
    int shortest_path(int m , int n , vector<list<pair<int,int>>>& graph){
        vector<int> dist(m*n , INT_MAX);
        priority_queue<P , vector<P> , greater<P>> pq;
        pq.push({0 , 0}); 
        dist[0] = 0;

        while(!pq.empty()){
            auto temp = pq.top();
            pq.pop();
            int d = temp.first;
            int u = temp.second;
            if (d > dist[u]) continue;

            for(auto neighbour : graph[u]){
                int node = neighbour.first;
                int distance = neighbour.second;
                if(d + distance < dist[node]){
                    dist[node] = d + distance;
                    pq.push({d + distance , node});
                }
            }
        }
        return dist[m*n-1];
    }
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<list<pair<int,int>>> graph(m*n); 
        vector<vector<int>> arr(m , vector<int>(n));
        int count = 0; 
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                arr[i][j] = count;
                count++;
            }
        }      
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(j+1 < n){
                    if(grid[i][j] == 1) graph[arr[i][j]].push_back({arr[i][j+1] , 0});
                    else graph[arr[i][j]].push_back({arr[i][j+1] , 1});
                }
                if(j-1 >= 0){
                    if(grid[i][j] == 2) graph[arr[i][j]].push_back({arr[i][j-1] , 0});
                    else graph[arr[i][j]].push_back({arr[i][j-1] , 1});
                }
                if(i+1 < m){
                    if(grid[i][j] == 3) graph[arr[i][j]].push_back({arr[i+1][j] , 0});
                    else graph[arr[i][j]].push_back({arr[i+1][j] , 1});
                }
                if(i-1 >= 0){
                    if(grid[i][j] == 4) graph[arr[i][j]].push_back({arr[i-1][j] , 0});
                    else graph[arr[i][j]].push_back({arr[i-1][j] , 1});
                }
            }
        }
        return shortest_path( m , n , graph);
    }
};