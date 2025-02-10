#include<iostream>//multiplication of matrix
using namespace std;
int main(){
    int x,y,z,a=0,b=0,c=0,d=0;;
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
    
    for(int i=1;i<2*x-1;i++){
        for(int j=0;j<y;j++){
           if(i==1 or i%4==1){
            if(j==y-a) break;
            else cout<<arr[i%4-1+a][j+a]<<" ";
            if(j==(y-1-a)) a++;
           }
           else if(i==2 or i%4==2) {
            if(j==(0+b)) continue;
            else cout<<arr[j][y-1-b]<<" ";
            if(j==(y-1)) b++;
           }
           else if(i==3 or i%4==3) {
            if(j==(0+c)) continue;
            else cout<<arr[x-1-c][y-1-j]<<" ";
            if(j==(y-1)) c++;
           }
           else if(i==4 or i%4==0) {
            if(i==(1+d)) d++;
            else if(j==y-2-d) break; 
            else cout<<arr[x-2-d-j][0+d]<<" ";
           }
        }
     }

}