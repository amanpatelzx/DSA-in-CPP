#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> parent;
vector<int> min_val;
vector<int> max_val;
vector<int> sz;

// Find function with Path Compression
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

// Union function with Union by Size
void unite_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        
        parent[b] = a;
        sz[a] += sz[b];
        min_val[a] = min(min_val[a], min_val[b]);
        max_val[a] = max(max_val[a], max_val[b]);
    }
}

int main() {
    // Fast I/O for VS Code console/competitive testing
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    // Initialize arrays
    parent.resize( n + 1 , 1);
    min_val.resize( n + 1 , 1);
    max_val.resize( n + 1, 1);
    sz.resize( n + 1 , 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        min_val[i] = i;
        max_val[i] = i;
    }

    while (m--) {
        string op;
        cin >> op;
        if (op == "union") {
            int u, v;
            cin >> u >> v;
            unite_sets(u, v);
        } else if (op == "get") {
            int v;
            cin >> v;
            int root = find_set(v);
            cout << min_val[root] << " " << max_val[root] << " " << sz[root] << "\n";
        }
    }

    return 0;
}