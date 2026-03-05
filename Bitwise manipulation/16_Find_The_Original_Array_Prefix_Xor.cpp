You are given an integer array pref of size n. Find and return the array arr of size n that satisfies:

pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i].
Note that ^ denotes the bitwise-xor operation.

It can be proven that the answer is unique.

eg.
Input: pref = [5,2,0,3,1]
Output: [5,7,2,3,2]
Explanation: From the array [5,7,2,3,2] we have the following:
- pref[0] = 5.
- pref[1] = 5 ^ 7 = 2.
- pref[2] = 5 ^ 7 ^ 2 = 0.
- pref[3] = 5 ^ 7 ^ 2 ^ 3 = 3.
- pref[4] = 5 ^ 7 ^ 2 ^ 3 ^ 2 = 1.

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        int temp = 0;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            arr[i] = (pref[i] ^ temp);//becouse , arr[i]^x = pref[i];
            temp = (temp ^ arr[i]);//if we take xor with x both side then we get required equation
        }
        return arr;
    }
};