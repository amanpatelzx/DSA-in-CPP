#include<iostream>
#include<vector>
using namespace std;
    int x;
    void q(int i,int j,vector<int>&v){
        while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

    }
void p(vector<int>&v){
    cout<<"Your 3rd required no are ";
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
}
    cout<<endl;

}
int main(){
    cout<<"Enter the no. of Element you want to give \n";
    cin>>x;
    
    vector<int>v;
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v.push_back(y);
    
    }
    int k;
    cout<<"Enter the no. from to there\n";
    cin>>k;
    q(k,x-1,v);
    q(0,x-k-1,v);
    
    q(0,x-1,v);
    p(v);


}





