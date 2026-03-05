Reverse bits of a given 32 bits signed integer.
eg.
43261596	00000010100101000001111010011100
964176192	00111001011110000010100101000000

class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;
        for(int i = 0; i < 32; i++){
            int idx = 1 & (n >> (31-i));
            ans = (ans | (idx << i));
        }
        return ans;
    }
};