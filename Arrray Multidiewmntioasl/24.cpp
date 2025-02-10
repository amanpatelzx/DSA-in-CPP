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
    
    for(int i=1;i<2*x;i++){
           if(i==1 or i%4==1){
        for(int j=a;j<y;j++){
            if(j==y-a) break;
            else cout<<arr[i%4-1+a][j]<<" ";
            if(j==(y-1-a)) a++;
           }
        }
           else if(i==2 or i%4==2) {
        for(int j=b;j<y-b;j++){
            if(j==(0+b)) continue;
            else cout<<arr[j+b][y-b]<<" ";
            if(j==(y-1-b)){
                b++; 
                break;
            }
           }
        }
           else if(i==3 or i%4==3) {
        for(int j=c;j<y;j++){
            if(j==(0+c)) break;
            else cout<<arr[x-1-c][y-1-j]<<" ";
            if(j==(y-1-c)){
            c++;
            }
           }
        }
           else if(i==4 or i%4==0) {
        for(int j=d;j<y;j++){
            if(j==y-2-d) break; 
            else cout<<arr[x-2-d-j][0+d]<<" ";
            if(j==y-1-d) d++;
           }
        }
        
     }
}