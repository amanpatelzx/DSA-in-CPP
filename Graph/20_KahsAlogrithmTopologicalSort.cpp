#include<iostream>//same question asked on leetcode - source sedule 1 and 2
#include<vector>
#include<list>
#include<queue>
using namespace std;
vector<list<int>> graph;
int v;
void add_edge(int a , int b, bool bi_directional = true){
    graph[a].push_back(b);
    if(bi_directional) graph[b].push_back(a);
}
void topological_sort(){
    vector<int> in_degree(v , 0);
    for(int i = 0; i < v; i++){
        for(auto neighbour : graph[i]){
            in_degree[neighbour]++;
        }
    }
    queue<int> q;
    for(int i = 0; i < v; i++){
        if(in_degree[i] == 0) q.push(i);
    }
    int count = 0;
    while(!q.empty()){
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        count++;
        for( auto neighbour : graph[temp]){
            in_degree[neighbour]--;
            if(in_degree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    if(count != v) cout<<" This is cyclic graph";
    return;
}
int main(){
    cout<<"Enter the no. of Vertex \n";
    cin>>v;
    cout<<"Enter the no. of edge \n";
    int e;
    cin>>e;
    graph.resize(v , list<int>());
    while(e--){
        int a , b;
        cin >> a >> b;
        add_edge( a , b , false);
    }
    topological_sort();
}