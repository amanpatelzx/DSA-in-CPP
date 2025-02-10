#include <iostream>//learn this very important
#include <vector>//next permutation
using namespace std;
int x;

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
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";

    }
}
void p(vector<int>&v){
    int idx;
    for(int i=x-2;i>=0;i--){
       if(v[i]<v[i+1]){
       idx=i;
       break;
       }
    
}
    if(idx==x-2)  rev(v,idx);
    else{
        rev(v,idx);
        swap(v,idx);
}
    print(v);
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
    p(v);
}