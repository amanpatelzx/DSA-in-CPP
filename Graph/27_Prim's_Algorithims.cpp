#include <bits/stdc++.h>
using namespace std;

int primMST(int V, vector<vector<pair<int,int>>>& adj) {
    // min-heap: {weight, node}
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    vector<int> visited(V, 0);
    pq.push({0, 0});   // {weight, start_node}

    int mstCost = 0;

    while (!pq.empty()) {
        auto [wt, node] = pq.top();
        pq.pop();

        if (visited[node]) continue;

        visited[node] = 1;
        mstCost += wt;

        for (auto &edge : adj[node]) {
            int nextNode = edge.first;
            int nextWt = edge.second;

            if (!visited[nextNode]) {
                pq.push({nextWt, nextNode});
            }
        }
    }
    return mstCost;
}

int main() {
    int V = 5;
    vector<vector<pair<int,int>>> adj(V);

    // Graph edges (u, v, weight)
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({3, 6});
    adj[3].push_back({0, 6});

    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});

    adj[1].push_back({3, 8});
    adj[3].push_back({1, 8});

    adj[1].push_back({4, 5});
    adj[4].push_back({1, 5});

    adj[2].push_back({4, 7});
    adj[4].push_back({2, 7});

    cout << "Minimum Spanning Tree cost: " << primMST(V, adj);
    return 0;
}
