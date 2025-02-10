#include<iostream>//
#include<vector>
using namespace std;//sqrt by binary search
int main(){
    int x;
    cout<<"Enter x -> ";
    cin>>x;
    int low=1;
    int high=x;
    bool flag=false;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid==x){
         cout<<"Square root of "<<x<<" = "<<mid;
         flag=true;
         break;
        }
        else if(mid*mid<x) low=mid+1;
        else if(mid*mid>x) high=mid-1;
 }
 if(flag==false) cout<<"Nearest Square root of "<<x<<" = "<<high;
}
