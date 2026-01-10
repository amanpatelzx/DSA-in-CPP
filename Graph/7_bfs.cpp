#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
#include<climits>
using namespace std;
vector<int> dist;
unordered_set<int> visited;
vector<list<int>> graph;
int v; // no. of vertices
void add_edge(int src , int dest , bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}
void display(){
    for(int i = 0; i < graph.size(); i++){
        cout << i << " -> ";
        for(auto ele : graph[i]){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
}
void dfs(int src){
    dist.resize(v, INT_MAX);
    visited.clear();
    queue<int> q;
    q.push(src);
    visited.insert(src);
    dist[src] = 0;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(auto neighbour : graph[curr]){
            if(!visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }

}
int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s , d);
    }
    display();
    dfs(4);
    cout<<endl;
    for(int i = 0; i < dist.size(); i++){
        cout<<dist[i]<< " ";
    }
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