class Solution {
public:
    int nthUglyNumber(int n) {
        // if(n == 1) return 1;//this give TLE;
        // int count = 0;
        // for(int i = 1; i < INT_MAX; i++){
        //     if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0){
        //         int val = i;
        //         while( val % 2 == 0) val /= 2;
        //         while( val % 3 == 0) val /= 3;
        //         while( val % 5 == 0) val /= 5;
        //         if(val == 1){
        //             count++;
        //             if(count == n-1){
        //                 return i;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return 1;
        vector<int> nums(n+1);
        nums[0] = 1;
        int two = 0 ,three = 0, five = 0;
        int curr = 0;
        for(int i = 2; i < INT_MAX; i++){
            if(curr == n-1) return nums[curr];
            else if(nums[five]*5 >= nums[two]*2 && nums[three]*3 >= nums[two]*2){
                if(nums[two]*2 > nums[curr]){
                    curr++;
                    nums[curr] = nums[two]*2;
                }
                two++;
            }
            else if(nums[five]*5 >= nums[three]*3 && nums[three]*3 <= nums[two]*2){
                if(nums[three]*3 > nums[curr]){
                    curr++;
                    nums[curr] = nums[three]*3;
                }
                three++;
            }
            else if(nums[five]*5 <= nums[three]*3 && nums[five]*5 <= nums[two]*2){
                if(nums[five]*5 > nums[curr]){
                    curr++;
                    nums[curr] = nums[five]*5;
                }
                five++;
            }
        }
        return 1;
    }
};