#include <iostream>
#include <vector>
#include<climits>
using namespace std;
int x;
void store(vector<int>&v,int a, int b){
    int d=0;
    int c=0;
    int e=a;
    int g=0;
    int h;
    int n;
    int o;
  for(int i=a;i<(x-b-1);i++){
      int f=e;
    for(int i=e;i<x-b-1;i++){
        if(v[f]<=v[i+1]){
        g=i;
        break;
        }
  }
  if (g!=f){
    int h=0;
    }
    if(h==0){
    g=g;
    }
  else if(g==f){
    h=1;
    n=INT_MIN;
    for(int i=e+1;i<x-b-1;i++){
        if(n<v[i])
        n=v[i];
        o=i;
    }

    }
    if(h==1){
      g=o;
    }
        if(h==0){
        for(int j=f;j<g;j++){
        e++;
        c=(v[f]-v[j]);
        d=d+c;
        }
    }

      else if(h==1){
      for(int j=f;j<g;j++){
        e++;
      
      c=(n-v[j+1]);
        d=d+c;
      }
      }
      if(e==(x-b-1)){
      break;
      
    }

    }
    
    
    cout<<"Your require result is "<<d;
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