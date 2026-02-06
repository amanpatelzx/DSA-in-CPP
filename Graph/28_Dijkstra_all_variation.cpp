#include <bits/stdc++.h>
using namespace std;
//Dijkstra – Basic (Adjacency List + Min Heap)
// Shortest distance from source to all nodes
// TC: O(E log V)
vector<int> dijkstra(int V, vector<vector<pair<int,int>>> &adj, int src) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(V, INT_MAX);

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for (auto &edge : adj[u]) {
            int v = edge.first;
            int wt = edge.second;

            if (dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
//Dijkstra – Print Path (Shortest Path Reconstruction)
vector<int> dijkstraPath(int V, vector<vector<pair<int,int>>> &adj, int src, int dest) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(V, INT_MAX), parent(V, -1);

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;

        for (auto &edge : adj[u]) {
            int v = edge.first, wt = edge.second;
            if (dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    vector<int> path;
    for (int v = dest; v != -1; v = parent[v])
        path.push_back(v);

    reverse(path.begin(), path.end());
    return path;
}
//Dijkstra – Using Adjacency Matrix
//Small graph (V ≤ 1000)
//TC: O(V²)
vector<int> dijkstraMatrix(int V, vector<vector<int>>& graph, int src) {
    vector<int> dist(V, INT_MAX);
    vector<bool> vis(V, false);

    dist[src] = 0;

    for (int i = 0; i < V; i++) {
        int u = -1;
        for (int j = 0; j < V; j++)
            if (!vis[j] && (u == -1 || dist[j] < dist[u]))
                u = j;

        vis[u] = true;

        for (int v = 0; v < V; v++) {
            if (graph[u][v] && dist[u] != INT_MAX)
                dist[v] = min(dist[v], dist[u] + graph[u][v]);
        }
    }
    return dist;
}
//Dijkstra – Single Source → Single Destination (Early Stop)
int dijkstraSingleDest(int V, vector<vector<pair<int,int>>> &adj, int src, int dest) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(V, INT_MAX);

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (u == dest) return d;

        for (auto &e : adj[u]) {
            int v = e.first, wt = e.second;
            if (d + wt < dist[v]) {
                dist[v] = d + wt;
                pq.push({dist[v], v});
            }
        }
    }
    return -1;
}
//Dijkstra – Grid / Matrix (2D shortest path)
//LeetCode type: minimum path cost
int dijkstraGrid(vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<>> pq;
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));

    dist[0][0] = grid[0][0];
    pq.push({grid[0][0], {0,0}});

    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};

    while (!pq.empty()) {
        auto [d, cell] = pq.top(); pq.pop();
        int x = cell.first, y = cell.second;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx>=0 && ny>=0 && nx<n && ny<m) {
                if (d + grid[nx][ny] < dist[nx][ny]) {
                    dist[nx][ny] = d + grid[nx][ny];
                    pq.push({dist[nx][ny], {nx, ny}});
                }
            }
        }
    }
    return dist[n-1][m-1];
}
//Dijkstra – Multi Source
//Multiple starting points
vector<int> multiSourceDijkstra(int V, vector<vector<pair<int,int>>> &adj, vector<int>& sources) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(V, INT_MAX);

    for (int s : sources) {
        dist[s] = 0;
        pq.push({0, s});
    }

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;

        for (auto &e : adj[u]) {
            int v = e.first, wt = e.second;
            if (d + wt < dist[v]) {
                dist[v] = d + wt;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

//❌ Negative weight → Dijkstra fails
//✅ Use Bellman-Ford if negative edges
//❌ Negative cycle → Impossible
