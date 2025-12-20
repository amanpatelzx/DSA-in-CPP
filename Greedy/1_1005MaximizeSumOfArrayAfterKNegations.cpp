#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int f(vector<int>& nums , int k){
        sort(nums.begin(), nums.end());
        int NegativeIdx = 0;
        int PositiveIdx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0)
                NegativeIdx = i;
            else {
                PositiveIdx = i;
                break;
            }
        }
        int ans = 0;
        int difference = k - NegativeIdx - 1;
        if(PositiveIdx == 0 && nums[PositiveIdx] >= 0) difference = k - NegativeIdx;
        if(difference < 0){
            for(int i = 0; i < nums.size(); i++){
                if(i < k) ans += abs(nums[i]);
                else ans += nums[i];
            }
        }
        else {
                for(int i = 0; i < nums.size(); i++){
                    if(i <= NegativeIdx && i < k) ans += abs(nums[i]);
                    else ans += nums[i];
                }            
            if ( abs(nums[NegativeIdx]) <= abs(nums[PositiveIdx])){
                if(difference % 2 == 0 ) return ans;
                else {
                    ans = ans - 2 * abs(nums[NegativeIdx]);
                    return ans;
                }
            }
            else {
               if(difference % 2 == 0 ) return ans;
                else {
                    ans = ans - 2 * abs(nums[PositiveIdx]);
                    return ans;
                } 
            }
        }
        return ans;
    }
    int f2(vector<int> & nums , int k){
        priority_queue<int , vector<int> , greater<int> > pq;
        for(int ele : nums){
            pq.push(ele);
        }
        int ans = 0;
            while(k > 0){
                int temp = pq.top();
                pq.pop();
                pq.push(temp*(-1));
                k--;
            }
        while(pq.size() != 0){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
int main(){
    vector<int> nums = {2 , 4 ,5, 6 , 7};
    int k = 3;
    // cout << f(nums , k);
        cout << f2(nums , k);
}