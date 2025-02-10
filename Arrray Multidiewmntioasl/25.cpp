#include<iostream>//spiral of matrix
using namespace std;
int main(){
    int x,y,s=0;
    cout<<"Rows and column : ";
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    cout<<endl;
    int a=0,b=0,c=y-1,d=x-1;
    int i=0;
    while(c>=b and d>=a){
        for(int j=b;j<=c;j++){
            cout<<arr[a][j]<<" ";
            s++;
        }
            if(s==x*y){ break;}
        a++;
        for(int j=a;j<=d;j++){
            cout<<arr[j][c]<<" ";
            s++;
        }
            if(s==x*y){ break;}
        c--;
        for(int j=0;j<=c-b;j++){
            cout<<arr[d][c-j]<<" ";
            s++;
        }
            if(s==x*y){ break;}
        d--;
        for(int j=0;j<d-b;j++){
            cout<<arr[d-j][b]<<" ";
            s++;
        }
            if(s==x*y){ break;}
        b++;
    }
}
    
    