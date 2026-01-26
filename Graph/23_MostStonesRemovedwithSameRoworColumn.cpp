class Solution {//947 leetcode, very good question
public://https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/
    int find(int x, vector<int> &parent){
        if(parent[x] == x) return x;
        return parent[x] = find( parent[x] , parent);
    }
    void Union(vector<int> &parent , vector<int>& rank , int x, int y){
        int a = find(x , parent);
        int b = find(y , parent);
        if(a == b) return;
        if(rank[a] > rank[b]) parent[b] = a;
        else if(rank[b] > rank[a]) parent[a] = b;
        else {
            rank[a]++;
            parent[b] = a;
        }

    }
    int removeStones(vector<vector<int>>& stones) {
        int v = stones.size();
        vector<int> parent( v, 0);
        vector<int> rank(v , 0);
        for(int i = 0; i < v; i++) parent[i] = i;

        for(int i = 0; i < v; i++){
            int a = stones[i][0];
            int b = stones[i][1];
            for(int  j = 0; j < v; j++){
                if(j == i) continue;
                int c = stones[j][0];
                int d = stones[j][1];
                if( a == c || b == d) Union(parent , rank, i , j);
            }
        }
        int count = 0;
        for(int i = 0; i < v; i++){
            if(parent[i] == i) count++;//crucial point keep in mind
        }//this mean total independet left node
        return v - count;
    }
};