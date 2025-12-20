#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int numRabbits(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto ele : arr) m[ele]++;
        int ans = 0;
        for(auto ele : m){
            int f1 = ele.first;
            int f2 = ele.second;
            if(f1 - f2 >= 0) ans += f1 + 1;
            else {
                if( f1 == 1){
                    int qoutient = f2 / 2;
                    int remainder = f2 % 2;
                    ans += (f1 + 1) * qoutient;
                    if( remainder != 0) ans += f1 + 1;
                }
                else if( f1 == 0){
                    ans += f2;
                }
                else{
                    int qoutient = f2 / (f1+1);
                    int remainder = f2 % (f1+1);
                    ans += (f1 + 1) * qoutient;
                    if( remainder != 0) ans += f1 + 1;
                }
            }
        }
        return ans;
    }
int main(){
    vector<int> arr = {1,1,2};
    cout<<numRabbits(arr);
}