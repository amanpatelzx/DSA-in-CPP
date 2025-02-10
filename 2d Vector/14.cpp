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
int bin(vector<int>&v1){
    int s=0,a=1;
    for(int i=1;i<=v1.size();i++){
        s=s+v1[v1.size()-i]*a;
        a=a*2;
    }
    return s;
}
int ts(vector<vector<int>>&v2){
     int sum=0;
    for(int i=0;i<v2.size();i++){
        sum+=bin(v2[i]);
    }
    return sum;
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
    cout<<"Total sum binary no in starting is : "<<ts(v)<<endl; 
    //this row changing 
    for(int i=0;i<x;i++){
            if(v[i][0]==0){
      for(int j=0;j<y;j++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    print(v);
    cout<<"Total sum binary no in after changing row is : "<<ts(v)<<endl; 
    //coloum changing
    for(int j=1;j<y;j++){
        int m=0,n=0;
      for(int k=0;k<x;k++){
         if(v[k][j]==0) m++;
         else n++;
      }
        if(m>n){
          for(int i=0;i<x;i++){
                if(v[i][j]==0) v[i][j]=1;
                 else v[i][j]=0;
            }
        }
        m=0;
        n=0;
    }
    print(v);
    cout<<"Total sum binary no in final answer is : "<<ts(v)<<endl; 
}

    
