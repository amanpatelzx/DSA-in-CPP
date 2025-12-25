class Solution {
public:
    void f(int idx ,int target,vector<int> &arr , vector<vector<int>> &ans , vector<int> &temp){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if( idx == arr.size()) return;
        for(int i = idx; i < arr.size(); i++) {
            if (i > idx && arr[i] == arr[i - 1]) continue;//important - save by dublicate
            if (arr[i] > target) break;
            temp.push_back(arr[i]);
            f(i + 1, target - arr[i], arr, ans, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        f(0 , target ,arr, ans ,temp);
        return ans;
    }
};