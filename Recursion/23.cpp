#include<iostream>//maze problem
using namespace std; 
int maze(int a,int b,int c,int d,string s){
    if(d>b or c>a) return 0;
    if(c==a and d==b) {
        cout<<s<<" ";
        return 1;
    }
    int right=maze(a,b,c+1,d,s+'R');
    int down=maze(a,b,c,d+1,s+'D');
    return right+down;
}
int main(){
    int a,b;
    cout<<"Enter no of rows and column : ";
    cin>>a>>b;
    cout<<maze(a,b,1,1,"");
}
