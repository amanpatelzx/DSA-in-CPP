#include<iostream>
#include<vector>
using namespace std;
int x;
void print(vector<int>&v){
for(int i=0;i<x;i++){
cout<<v[i]<<" ";
}
}
void swap(vector<int>&v,int a,int b){
    int temp=v[a];
    v[a]=v[b];
    v[b]=temp;
}
void rev(vector<int>&v){
    int a,b;
for(int i=0;i<x;i++){
    if(v[x-i-2]<v[x-1]){
        a=x-i-2;
        break;
    }

}
        cout<<a<<endl;
for(int i=0;i<x;i++){
    if(v[a]<v[x-i-1]){
        b=x-i-1;
        break;
    }
}
        cout<<b<<endl;
swap(v,a,b);
print(v);

    
}

int main(){
    cout<<"Enter the no, of element\n";\
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        int a;
        cin>>a;
        v[i]=a;
    }
    rev(v);
}