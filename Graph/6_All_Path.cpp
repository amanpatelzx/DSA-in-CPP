#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
unordered_set<int> visited;
vector<vector<int>> ans;
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

void dfs(int curr, int end , vector<int> &path){
    if(curr == end){
        path.push_back(curr);
        ans.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr); //mark visited
    path.push_back(curr);
    for( auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            dfs(neighbour , end , path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void all_path(int src , int dest , vector<int> &path){
    dfs(src , dest , path);
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
    vector<int> path;
    all_path(0 , 4 , path);
    cout<<endl;
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
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