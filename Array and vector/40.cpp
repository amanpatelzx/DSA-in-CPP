#include <iostream>
#include <vector>
using namespace std;
int x;
int d=0;
int c=0;
// int next(vector<int>&v, int a, int b){
//   int d;
//   for(int i=a; i<b; i++){
    
//   }
// }
void forw(vector<int>&v, int a, int b){
  for(int i=a; i<b; i++){
    c=v[a]-v[i];
    d=d+c;
  }
}
void back(vector<int>&v, int a, int b){
  for(int i=a; i<b; i++){
    c=v[b]-v[i];
    d=d+c;
  }
}
void store(vector<int>&v,int a, int b){
  int e=a,f,g=a,h=0,k=0;
 for(int i=a;i<x-b-1;i++){
  f=e;
    for(int j=f;j<x-1-b;j++){
      if(v[f]<v[j]){
        e++;
        g=j;
        }
        else {h>v[j];
        e++;
        h=v[j];
        k=j;
        }
    }
    forw(v,f,g);
    back(v,f,g);


 }
 cout<<"Your Require result is "<<d;
}
void rain(vector<int> &v){
    int a=-1;
    for(int i=0;i<x;i++){
        a++;
      if(v[i]>v[i+1]){
        break;
      }

    }
    cout<<a;
    cout<<endl;
    
    int b=-1;
    for(int i=0;i<x;i++){
      b++;
      if(v[x-1-i]>v[x-2-i]){
        break;
      }
      
    }
     cout<<b;
    cout<<endl;
    // cout<<b<endl;
    store(v,a,b);

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
    
    rain(v);
}