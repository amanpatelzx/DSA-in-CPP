class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = sqrt(num); i > 0; i--){
            if(num % i == 0){
                 sum += i;
                 if(sqrt(num) != i) sum += num/i; 
            }
        }
        return (sum-num == num);
    }
};