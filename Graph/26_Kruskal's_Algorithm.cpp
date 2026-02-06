#include<bits/stdc++.h>//https://www.hackerrank.com/challenges/kruskalmstrsub/problem
using namespace std;
#define ll long long int
int find(vector<int>&parent , int x){
    return parent[x] = (parent[x] == x) ? x : find(parent , parent[x]);
}
void Union(vector<int>&parent , vector<int>& rank , int a, int b){
    if( rank[a] >= rank[b]){
        rank[a]++;
        parent[b] = a;
    }else{
        rank[b]++;
        parent[a] = b;
    }
}
struct Edge{
    int src;
    int dest;
    int wt;
};
bool cmp(Edge e1 , Edge e2){
    return e1.wt < e2.wt;
}
ll kruskals(vector<Edge> &input , int n,  int e){
    sort(input.begin() , input.end() , cmp);
    vector<int> parent(n+1);
    vector<int> rank(n+1 , 1);
    for(int i = 0; i <= n; i++){
        parent[i] = i;
    }
    int edgeCount = 0;
    int i = 0;
    ll ans = 0;
    while(edgeCount < n-1 && i < input.size()){
        Edge curr = input[i];
        int srcParent = find(parent , curr.src);
        int destParent = find(parent, curr.dest);
        if(srcParent != destParent){
            //include edge as this will not make cycle
            Union(parent , rank, srcParent , destParent);
            ans += curr.wt;
            edgeCount++;
        }
        i++;
    }
    return ans;
}
int main(){
    int n , e;
    cin>>n>>e;
    vector<Edge> v(e);
    for(int i = 0; i < e; i++){
        cin>>v[i].src>>v[i].dest>>v[i].wt;
    }
    cout<<kruskals(v , n , e)<<"\n";
    return 0;   
}
// 4 6
// 1 2 5
// 1 3 3
// 4 1 6
// 2 4 7
// 3 2 4
// 3 4 5