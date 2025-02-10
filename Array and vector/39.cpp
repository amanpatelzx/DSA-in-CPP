#include <iostream>
#include <vector>
using namespace std;
int x;
void store(vector<int>&v,int a, int b){
    int d=0;
    int c=0;
    int e=a;
    for(int i=a;i<(x-b-1);i++){
      int f=e;
      for(int j=f;j<(x-b-2);j++){
        e++;
      if(v[f]<v[j+1]){
      break;
      }
      
      
     else c=(v[f]-v[j+1]);
        // if(c<0) c=-1*c;
        // else c=c;
        d=d+c;
        

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