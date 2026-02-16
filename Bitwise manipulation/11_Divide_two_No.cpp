#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 3;
    int count = 0;
    while(b < a){
        b = (b << 1);
        count++;
    }
    int ans = (1 << count);
    cout<<ans;
}