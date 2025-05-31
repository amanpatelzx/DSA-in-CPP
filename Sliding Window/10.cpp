#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int count = 0;
        int n = nums.size();
        int i = 0, j = 0;
        while ( i < n){
            int product = 1;
            j = i;
            while ( j < n){
                product = nums[j]*product;
                cout<<" THe product is "<<product<< " ; \n" ;
                if( product < k ) {
                    cout<<"[ "<<i<<" , "<<j<<" ] , ";
                    count++;
                }
                if( product > k ){
                    j++;
                    break;
                }
                j++;
            }
            i++;
        }
        return count;
}
int main(){
    int k=100;
    vector<int>nums={10,5,2,6};
    cout<<numSubarrayProductLessThanK(nums,k);  
}