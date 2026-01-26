class Solution {//leetcode 2316
public://https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph/
    int find( vector<int> &parent , int x){
        if( parent[x] == x) return x;
        return parent[x] = find( parent , parent[x]);
    }
    void Union(vector<int> &parent, vector<int> &size , int x , int y){
        int a = find( parent, x);
        int b = find( parent , y);
        if( a == b) return;
        if(size[a] >= size[b]){
            size[a] += size[b];
            parent[b] = a;
        }
        else{
            size[b] += size[a];
            parent[a] = b;
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> parent( n , 0);
        vector<int> size( n , 1);
        for(int i = 0; i < n; i++) parent[i] = i;
        for(int i = 0; i < edges.size(); i++){
            Union(parent, size , edges[i][0] , edges[i][1]);
        }
        long long v = n;
        long long total = (v * (v-1))/2;
        long long reached = 0;

        for(int i = 0; i < n; i++){
            if(parent[i] == i){
                long long  s = size[i];
                reached += (s*(s-1))/2;
            }
        }
        // long long ans = 0;
        // for(int i = 0; i < temp.size(); i++){
        //     for(int j = i + 1; j < temp.size(); j++){
        //         long long a = temp[i];
        //         long long b = temp[j];
        //         ans += a*b;
        //     }
        // }
        // return ans + (n-one)*one + (one*(one-1))/2;
        return total - reached;//keep in mind this way of solving
    }
};