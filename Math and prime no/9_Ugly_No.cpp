// An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
// Given an integer n, return true if n is an ugly number.
class Solution {
public:
    bool isUgly(int n) {
        if(n == 0) return false;
        int val = n;
        while( val % 2 == 0) val /= 2;
        while( val % 3 == 0) val /= 3;
        while( val % 5 == 0) val /= 5;
        if(val == 1) return true;
        return false;
    }
};