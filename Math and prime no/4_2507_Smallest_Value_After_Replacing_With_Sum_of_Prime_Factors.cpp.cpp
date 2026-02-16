class Solution {
public:
    bool prime(int n){
        for(int i = sqrt(n); i > 1; i--){
            if(n % i == 0) return false;
        }
        return true;
    }
    int smallestValue(int n) {
        int temp = n;
        int sum = 0;
        while(!prime(temp)){
            int val = temp;
            for(int i = 2; i <= temp/2; i++){
                int t = val;
                while(t > 1){
                    if(t % i == 0){
                        sum += i;
                        t /= i;
                        val = t;
                    }
                    else break;
                }   
            }
            if(sum == temp) return sum;
            temp = sum;
            sum = 0;
        }
        return temp; 
    }
};