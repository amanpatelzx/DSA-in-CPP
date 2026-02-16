class Solution {
public:
    unordered_set<int> s;
    void f(long long val){
        if(val == 2) if(!s.count(2)) s.insert(2);
        if(val == 3) if(!s.count(3)) s.insert(3);
        long long temp = val;
        for(long long i = 2; i <= val && temp > 1; i++){
            bool check = false;
            while(temp > 1){
                if(temp % i == 0){
                    temp = temp / i;
                    check = true;
                }
                else break;
            }
            if(check) if(!s.count(i)) s.insert(i);
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        long long product = 1;
        for(int i = 0; i < nums.size(); i++){
            product *= nums[i];
            if(product > LLONG_MAX/1002){
                f(product);
                product = 1;
            }
        }
        f(product);
        return s.size();
    }
};