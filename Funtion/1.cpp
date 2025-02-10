#include<iostream>
using namespace std;
int main(){
    int x,c;
    cin>>x;

    for(int i=0;i<=x;i++){
        for(int k=0;k<=x-i;k++){
            cout<<" ";
        }
        c=1;
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
            c=c*(i-j)/(j+1);
        }
        cout<<endl;

    }
}
