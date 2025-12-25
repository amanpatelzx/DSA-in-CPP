#include<iostream>//leetcode 56, 
#include<vector>//keep the solution in mind
#include<algorithm>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin() , arr.end());
        vector<vector<int>> ans;
        ans.push_back(arr[0]);
        int j = 0;
        for(int i = 1; i < arr.size(); i++){
            vector<int> curr = arr[i];
            if(curr[0] <= ans[j][1]){
                ans[j][0] = min(ans[j][0] , curr[0]);
                ans[j][1] = max(ans[j][1] , curr[1]);
            }
            else {
                ans.push_back(arr[i]);
                j++;
            }
        }
        return ans;
    }
int main(){

}