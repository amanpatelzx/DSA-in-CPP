#include<iostream>
#include<vector>
using namespace std;
//Path compression is an optimization used in the Find operation of a Disjoint Set Union (DSU) data structure. Its goal is to flatten the structure of the tree so that all nodes in a set point directly to the root.
int find(vector<int> &parent , int x){
    //this method return which group or cluster x belong to;
    return parent[x] = (parent[x] == x) ? x : find(parent , parent[x]);
}
void Union(vector<int> &parent , vector<int> & rank , int a , int b){
    a = find(parent, a);
    b = find(parent, b);

    if(rank[a] > rank[b]){
        parent[b] = a;
    }
    else if( rank[a] < rank[b]){
        parent[a] = b;
    }
    else{
        parent[b] = a;
        rank[a]++;;
    }
}
int main(){
    int n , m;
    //n-> no. of element , m -> no. of quaries
    cin>>n>>m;
    vector<int> parent(n+1);
    vector<int> rank(n+1 , 0);
    for(int i = 0; i <= n; i++){
        parent[i] = i;
    }
    while(m--){
        string str;
        cin>>str;
        if(str == "union"){
            int x , y;
            cin>>x>>y;
            Union(parent , rank , x , y);
        }
        else{
            int x;
            cin>>x;
            cout << find(parent , x)<<endl;
        }
    }
}