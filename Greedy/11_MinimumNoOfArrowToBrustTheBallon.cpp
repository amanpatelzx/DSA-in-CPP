#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findMinArrowShots(vector<vector<int>>& arr) {
        int ans = 0;
        sort(arr.begin() , arr.end());
        int firstRange = arr[0][0];
        int i = 0;
        while(i < arr.size()){
            int lastInterval = arr[i][1];
            while(i < arr.size() && arr[i][0] <= lastInterval){
                 i++;
                 if( i < arr.size())lastInterval = min(lastInterval , arr[i][1]);
            }
            ans++;
        }
        return ans;
    }
int main(){
    vector<vector<int>> arr = { {1,10} , {5,8} , {9,13}};
    cout<<findMinArrowShots(arr);
}