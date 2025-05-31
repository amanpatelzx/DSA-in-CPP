#include<iostream>//leetcode 713, most effective solution
#include<vector>
#include<cmath>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        int i = 0, j = 0;
        int product = 1;
        while ( i < n){
            if ( j < i) j=i;
            while ( j < n){
                product = nums[j] * product;
                if( product < k ) j++;
                else {
                     if(i!=j) product = product/nums[j];
                    break;
                }
            }
            count += j - i;
            product = product/nums[i];
            i++;
        }
        return count;
    }
int main(){
    int k=100;
    vector<int>nums={10,5,2,6};
    cout<<numSubarrayProductLessThanK(nums,k);  
}