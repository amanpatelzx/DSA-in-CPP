#include<iostream>//set bit means howmany ones in a binary no.
using namespace std;// 7 = 00000111 here is 3 setbit
int finding_setbit(int a){
    int count = 0;
    while(a!=0){
        a=a&(a-1);//this & work on bit wise opeeation
        count++;
    }
    return count;
}
int main(){
    cout<<__builtin_popcount(1111117876);//this is inbuilt funtion for calculating setbit
    cout<<endl;
    cout<<finding_setbit(1111117876);
}
