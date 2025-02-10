#include<iostream>//a^b calculate
using namespace std;
    int a,b;
void fun(int ans,int a,int b){
    if(b==0) cout<<ans;
    fun(ans*a,a,b-1);
    
}
int main(){
    cout<<"Enter the no.-> ";
    cin>>a;
    cout<<"Enter the no.-> ";
    cin>>b;
    fun(1,a,b);
}
