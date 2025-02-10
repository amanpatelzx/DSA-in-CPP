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
    int a=v[x-1][y-1],j=0,i=0,b=0;
    while(i!=x-1 or j!=x-1){
        // for(int k=0;k<y-1;k++){
        if(v[x-2-i][y-1-j]>=v[x-1-i][y-2-j] || i<x-1 || j<y-1){
            a=a+v[x-1-i][y-2-j];
            cout<<v[x-1-i][y-2-j]<<endl;
            j++;
            b++;
            if(b==4)break;
        } 
         else if(v[x-2-i][y-1-j]<=v[x-1-i][y-2-j] || i<x-1 || j<y-1){
            a=a+v[x-2-i][y-1-j]; 
            cout<<v[x-2-i][y-1-j]<<endl;
            i++;
            b++;                                
            if(b==4) break;
        }
        // else if(i=x-1){
        //     j++;
        //     a=a+v[x-1-i][y-2-j];
        // } 
        // else {
        //     i++;
        //     a=a+v[x-2-i][y-1-j];

        // }
       
    }
    cout<<"The sum is : "<<a;
    }
    

    
