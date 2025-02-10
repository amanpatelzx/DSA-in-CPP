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
int main(){
    int x,y;
    cout<<"Enter there row and column : ";
    cin>>x>>y;
    vector<vector<int>>v(x, vector<int> (y));
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){ 
            cin>>v[i][j];
        }
    }
    print(v);
    int a=v[0][0],j=0,i=0,b=0;
    while(i>x-1 or j!=x-1){
        // for(int k=0;k<y-1;k++){
        if(v[i+1][j]>=v[i][j+1] || i<x-1 || j<y-1){
            a=a+v[i][j+1];
            cout<<v[i][j+1]<<endl;
            j++;
        } 
        else if(v[i+1][j]<=v[i][j+1] || i<x-1 || j<y-1){
            a=a+v[i+1][j]; 
            cout<<v[i+1][j]<<endl;
            i++;
        }
        else if(i==x-1){
            a=a+v[i][j];
            cout<<v[i][j]<<endl;
            j++;
        } 
        else if(j==y-1){
            a=a+v[i][j];
            cout<<v[i][j]<<endl;
            i++;
        }
       
    }
    cout<<"The sum is : "<<a;
    }
    

    
