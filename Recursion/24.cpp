#include<iostream>//maze problem
using namespace std; 
int maze(int a,int b,string s){//this is opitimise way
    if(a<1 or b<1) return 0;
    if(a==1 and b==1) {
        cout<<s<<" ";
        return 1;
    }
    int right=maze(a,b-1,s+'R');
    int down=maze(a-1,b,s+'D');
    return right+down;
}
int main(){
    int a,b;
    cout<<"Enter no of rows and column : ";
    cin>>a>>b;
    cout<<maze(a,b,"");
}
