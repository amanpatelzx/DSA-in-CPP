#include <iostream>//learn this very important
#include <vector>//all possible permutation
#include<algorithm>
using namespace std;
int x;
// void sort(vector<int>&v){
//     vector<int>v1(x);
//     for(int i=0;i<x;i++){
//         for(int j=i;j<x;j++){
//            v1[i]=min(v[i],v[j]);
            
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         }
//     }
//     for(int i=0;i<x;i++){
//         v[i]=v1[i];
//     }
    

// }

void rev(vector<int> &v,int a){
    int j=x-1;
    int i=a;
    
    while(a<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
void swap(vector<int> &v,int a){
    
        int temp=v[a];
        v[a]=v[a+1];
      v[a+1]=temp;

}
void print(vector<int> &v){
    cout<<"(";
    for(int i=0;i<x;i++){
        cout<<v[i]<<",";

    }
    cout<<")";
}
void p(vector<int>&v,int a){
    print(v);
for(int i=0;i<a-1;i++){
    int idx;
    for(int j=x-2;j>=0;j--){
       if(v[j]<v[j+1]){
       idx=j;
       break;
    }
    
}
    if(idx==x-2){  
    rev(v,idx);
    }
    else{
        rev(v,idx);
        swap(v,idx);
}
    print(v);

}

}

int main()
{

    
    cout << "Enter the no. of Element you want to give \n";
    cin >> x;

    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        v[i]=y;
    }
    sort(v.begin(),v.end());
    
    
    int a=1;
    for (int i =1; i <= x; i++)
    {
        a=a*i;
    }
 
    p(v,a);
}