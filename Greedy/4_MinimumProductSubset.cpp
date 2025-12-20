#include<iostream>//Minimum Product Subset Problem
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int f(vector<int> &arr){
    int countNegative = 0, countPositve = 0, countZero = 0, negativeProduct = 1, positiveProduct = 1, maxNegativeNo = INT_MIN, minPositiveNo = INT_MAX;
    for(int i=0 ; i<arr.size(); i++){
        if(arr[i] < 0) {
            countNegative ++;
            negativeProduct *= arr[i];
            maxNegativeNo = max(maxNegativeNo , arr[i]);
        }
        if(arr[i] == 0){
            countZero++;
        }
        if(arr[i] > 0) {
            countPositve++;
            positiveProduct *= arr[i];
            minPositiveNo = min(minPositiveNo , arr[i]);
        }
    }
    if(countNegative == 0){
        if(countZero == 0 ) return minPositiveNo;
        else return 0;
    }
    else {
        if(countNegative % 2 == 0) return  (negativeProduct / maxNegativeNo) * positiveProduct;
        else return negativeProduct * positiveProduct;
    }
}
int main(){
    vector<int> arr = {3, -2 , 5, 0 , -1 , -4};
    cout<< f(arr);
}