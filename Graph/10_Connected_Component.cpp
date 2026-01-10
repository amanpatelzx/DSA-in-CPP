#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

int v;
unordered_set<int> visited;
vector<list<int>> graph;
void connect_edge(int a , int b, bool check = true){
    graph[a].push_back(b);
    if(check) graph[b].push_back(a);
}
void dfs(int node){
    visited.insert(node);
    for(auto neighbour : graph[node]){
        if(!visited.count(neighbour)){
            dfs(neighbour);
        }
    }
}
int connected_component(){
    int ans = 0;
    for(int i = 0; i < graph.size(); i++){
        if(visited.count(i) == 0){
            ans++;
            dfs(i);
        }
    }
    return ans;
}
int main(){
    cin>>v;
    graph.resize(v , list<int>());
    int e;
    cin>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        connect_edge(a, b);
    }
    cout<<connected_component();
}
// 7
// 7
// 0 2
// 0 1
// 1 5
// 2 5
// 2 3
// 3 6
// 6 4