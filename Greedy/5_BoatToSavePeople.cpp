class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int ans = 0;
        int i = 0 , j = arr.size()-1;
        // while(i<=j){
        //     if(arr[i]+arr[j]<= limit) {
        //         ans++;
        //         i++;
        //         j--;
        //     }
        //     else {
        //         ans++;
        //         j--;
        //     }
        // }
        while(i <= j){
            int temp = 0;
            temp += arr[j];
            j--;
            if(j>=0 and (temp + arr[j] <= limit)){
                j--;
                ans++;
            }
            else {
                if(temp + arr[i] <= limit) {
                    i++;
                    ans++;
                }
                else {
                    ans++;
                }
            }
        }
        return ans;
    }
};