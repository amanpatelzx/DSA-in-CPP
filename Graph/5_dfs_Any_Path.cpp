#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
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

bool dfs(int curr, int end){
    if(curr == end) return true;
    visited.insert(curr); //mark visited
    for( auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            bool result = dfs(neighbour , end);
            if(result) return true;
        }
    }
    return false;
}
bool any_path(int src , int dest){
    return dfs(src , dest);
}

int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s , d );
    }
    visited.clear();
    display();
    cout<<endl;
    cout<<any_path(0 , 4);
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