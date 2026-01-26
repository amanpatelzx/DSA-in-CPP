#include<iostream>
#include<vector>//if you want to check whether any cycle is exist in graph or not by DSU
using namespace std;
int find(vector<int> &parent , int x){
    if(parent[x] == x){
        return x;
    }
    return parent[x] = find(parent , parent[x]);
}
bool Union(vector<int> &parent, vector<int> &rank, int x , int y){
    int a = find(parent, x);
    int b = find(parent, y);

    if( a == b) return true;
    if(rank[a] > rank[b]){
        parent[b] = a;
    }
    else if( rank[a] < rank[b]){
        parent[a] = b;
    }
    else{
        parent[b] = a;
        rank[a]++;
    }
    return false;
}
int main(){
    vector<int> parent;
    vector<int> rank;
    int v;
    cin>>v;
    parent.resize( v , 0);
    rank.resize( v , 0);
    for(int i = 0; i < v; i++){
        parent[i] = i;
    }
    int e;
    cin>>e;
    while(e--){
        int x , y;
        cin>>x>>y;
        bool check = Union(parent , rank , x , y);
        if(check) cout<<"Cycle found\n";
    }
}
//test case
// 10
// 11
// 0 1
// 0 2
// 0 3
// 3 4
// 3 6
// 4 5
// 5 6
// 6 7
// 7 8
// 7 9
// 8 9
