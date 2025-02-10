#include<iostream>//max baniray no .
#include<vector>
using namespace std;
void print(vector<vector<int>>&v){
     cout<<endl;
    for(int i=0;i<v.size();i++){
      for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
// int bin(vector<int>&v1){
//     int s=0,a=1;
//     for(int i=1;i<=v1.size();i++){
//         s=s+v1[v1.size()-i]*a;
//         a=a*2;
//     }
//     return s;
// }
// int ts(vector<vector<int>>&v2){
//      int sum=0;
//     for(int i=0;i<v2.size();i++){
//         sum+=bin(v2[i]);
//     }
//     return sum;
// }
int main(){
    int x,y,z;
    cout<<"Enter there row and column : ";
    cin>>x>>y;
    cout<<"Enter the Target no. : ";
    cin>>z;
    vector<vector<int>>v(x, vector<int> (y));
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){ 
            cin>>v[i][j];
        }
    }
    print(v);
    int m=0,n=0,p=0,d=0;
    for(int i=0;i<x;i++){
      for(int j=0;j<=y;j++){
          if(v[n][y-1-p]==z) {
            m=1;
            break;
          }
          else if(v[n][y-n-1-p]<z){
            n++;
            d++;
            if(v[n][y-n-1]>z)
            break;
          }
          else if(v[n][y-1-p]>z){
          p++;
          d++;
          break;
          }
        }
        if(m==1){
        break;
        }
        }
        cout<<endl;
        if(m==1) cout<<"True";
        else cout<<"False";
        cout<<"\n"<<d;
    }
    

    
