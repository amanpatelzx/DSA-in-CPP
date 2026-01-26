#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
int v;
vector<list<int>> graph;
void add_edge(int a , int b , bool bi_directional = true){
    graph[a].push_back(b);
    if(bi_directional) graph[b].push_back(a);
}
bool dfs(int src ,int parent , unordered_set<int>& visited){
    bool result = false;
    visited.insert(src);
    for(auto neighbour : graph[src]){
        if(neighbour != parent && visited.count(neighbour)) return true;
        else if(!visited.count(neighbour)) {
            result = dfs(neighbour , src , visited);
            if(result) return true;
        }
    }
    return result;
}
bool cycle_exist(){
    unordered_set<int> visited;
    bool result = false;
    for(int i = 0; i < v; i++){
        if(!visited.count(i)){
            result = dfs(i , -1, visited);
            if(result) return true;
        }
    }
    return result;
}
int main(){
    cin>>v;
    graph.resize(v, list<int>());
    int e;
    cin>>e;
    while(e--){
        int a , b;
        cin>>a>>b;
        add_edge(a , b);
    }
    cout<<cycle_exist();
}