#include<iostream>//maze problem
using namespace std; 
int maze(int a,int b,int c,int d){
    if(d>b or c>a) return 0;
    if(c==a and d==b) return 1;
    int right=maze(a,b,c+1,d);
    int down=maze(a,b,c,d+1);
    return right+down;
}
void print(int a,int b,int c,int d,string s){
    if(d>b or c>a) return;
    if(c==a and d==b) cout<<s<<" ";;
    print(a,b,c+1,d,s+'R');
    print(a,b,c,d+1,s+'D');
}
int main(){
    int a,b;
    cout<<"Enter no of rows and column : ";
    cin>>a>>b;
    print(a,b,1,1,"");
    cout<<maze(a,b,1,1);
}
