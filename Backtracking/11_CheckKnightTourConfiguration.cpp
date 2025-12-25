#include<iostream>
#include<vector>
using namespace std;
bool ifPossible(int i , int j , int &n ,int &count , vector<vector<int>> &grid){
    if( i >= n || i < 0 || j >= n || j < 0) return false;
    if(grid[i][j] != count) return false;
    return true;
}
void f(int i, int j, int &n, int &count , vector<vector<int>> &grid , bool &ans){
    if(count == n*n){
        ans = true;
        return;
    }
    vector<int> dx = {-2 , -2 , -1 , -1, 1 , 1, 2 , 2};
    vector<int> dy = {-1 , 1 , -2 , 2 , -2 , 2 ,-1 ,1};
    bool test  = false;
    for(int a = 0; a < 8 ; a++){
        if(ans == true) return;
        if(ifPossible(i + dx[a], j + dy[a], n , count, grid)){
            test = true;
            count += 1;
            f(i+dx[a] , j+dy[a] , n , count , grid , ans);
            count -= 1;
        }
    }
    if(test != true) {
        ans = false;
        return;
    }
}
    int main(){
        vector<vector<int>> grid = {
            {0,11,16,5,20},
            {17,4,19,10,15},
            {12,1,8,21,6},
            {3,18,23,14,9},
            {24,13,2,7,22}};
        if(grid[0][0] != 0) return false;
        int n = grid.size();
        bool ans = false;
        int count = 1 ;
        f( 0 , 0 , n , count , grid , ans);
        cout<<ans;
    }