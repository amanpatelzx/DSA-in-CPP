#include<iostream>
using namespace std;
    int x;
void fun(int n){
    if(n==0) return;
    cout<<n<<" ";//if we get it down then ssee magic
    fun(n-1);//this can be also done as next
}
int main(){
    cout<<"Enter the no.-> ";
    cin>>x;
    fun(x);
}
