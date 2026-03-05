Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < 32; i++){
            int one = 0;
            int zero = 0;
            for(int j = 0; j < nums.size(); j++){
                if( (nums[j] & (1<<i)) == 0) zero++;
                else one++;
            }
            if(one % 3 != 0){
                ans = ( ans | (1 << i));
            }
        }
        return ans;
    }
};