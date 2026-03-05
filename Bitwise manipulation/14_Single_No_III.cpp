Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long x = 0;
        for(int i = 0; i < nums.size(); i++){
            x = x^nums[i];//by this we get xor of two unqiue element;
        }
        int mask = (x) & (-x);//gives rightmost set bit of x :: very important obersvation
        int a = 0;
        int b = 0;

        for(int i = 0; i < nums.size(); i++){
            if((mask & nums[i]) == 0) a = (a ^ nums[i]);
            else b = (b ^nums[i]);
        }
        return {a , b};
    }//do keep in mind this technique;
};