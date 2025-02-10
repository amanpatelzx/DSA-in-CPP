#include<iostream>//maze problem
using namespace std; 
int maze(int a,int b,int c,int d){
    if(d>b or c>a) return 0;
    if(c==a and d==b) return 1;
    return maze(a,b,c+1,d)+maze(a,b,c,d+1);
}
int main(){
    int a,b;
    cout<<"Enter no of rows and column : ";
    cin>>a>>b;
    cout<<maze(a,b,1,1);
}
