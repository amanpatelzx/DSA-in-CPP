#include<iostream>//finding no. of digits without using loop;
#include<string>
using namespace std;
int main(){
    string v;
    cout<<"Enter the string ";
    cin>>v;
    int a=0;
   
    for(int i=0;i<v.size();i++){
        if(v.size()==1) break;
        else if(v.size()==2 && v[i]!=v[i+1]){
            a++;
            break;
        }
        else if(i==0 && v[i]!=v[i+1]) a++;
        else if(i==(v.length()-1) && v[i]!=v[i-1]) a++;
        else if(v[i]!=v[i+1] && v[i]!=v[i-1]) a++;
    }
    cout<<"Required result is "<<a;
    
}
