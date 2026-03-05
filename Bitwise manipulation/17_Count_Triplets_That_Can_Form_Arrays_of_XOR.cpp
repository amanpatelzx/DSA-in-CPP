Given an array of integers arr.

We want to select three indices i, j and k where (0 <= i < j <= k < arr.length).

Lets define a and b as follows:

a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
Note that ^ denotes the bitwise-xor operation.

Return the number of triplets (i, j and k) Where a == b.

Example 1:

Input: arr = [2,3,1,6,7]
Output: 4
Explanation: The triplets are (0,1,2), (0,2,2), (2,3,4) and (2,4,4)

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            int tempA = 0;
            for(int j = i+1; j < n; j++){
                tempA = (tempA ^ arr[j-1]);
                int tempB = 0;
                for(int k = j; k < n; k++){
                    tempB = (tempB ^ arr[k]);
                    if(tempA == tempB) ans++;
                }
            }
        }
        return ans;
    }
};