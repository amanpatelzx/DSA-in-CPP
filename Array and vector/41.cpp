#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int x;
void print(vector<int> &v){
    for(int i=0;i<x;i++){
        cout<<v[i]<<",";

    }
}
int smax(vector<int>&v){
    int a=INT_MIN;
    int b=INT_MIN;
    for(int i=0;i<x;i++){
        if(a<=v[i])
        a=v[i];
    }
    for(int i=0;i<x;i++){
       if(b<=v[i] and v[i]!=a)
       b=v[i];
    }
    return a,b;

   

    

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
    
    
    smax(v);
    cout<<a<<" ";
    cout<<b;


}