class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<bool> arr(n+1 , true);
        int count = 0;
        for(int i = 2; i*i <= n; i++){
            if(arr[i]) count++;
            for(int j = i; j <= n; j += i){
                arr[j] = false;
            }
        }
        for(int i = 2; i < n; i++){
            if(arr[i]) count++;
        }
        return count;
    }
};