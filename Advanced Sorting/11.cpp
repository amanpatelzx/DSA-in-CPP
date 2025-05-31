#include<iostream>// positive smallest missing element 
#include<vector>//leatcode 41
#include<cmath>
using namespace std;
int main(){
    vector<int>nums={5,4,2,1};
    int n = nums.size();
        int i = 0;
        int ans=n+1;
        while (i < n) {
            if (nums[i] <= 0) i++;
            else if (nums[i] <= 0 || nums[i] > n || nums[i] == i + 1 || nums[nums[i] - 1] == nums[i]) i++;
            else swap(nums[i], nums[nums[i] - 1]);
        }
            for (int i = 0; i < n; i++) {
                if (nums[i] != i + 1) ans= i + 1;
            }
        cout<<ans<<" ";
} 