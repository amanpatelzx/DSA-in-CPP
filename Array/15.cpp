#include<iostream>
using namespace std;
int main(){
    int a[]={1,4,3,6,7,8};
    int *p = a;
    for(int i=0;i<6;i++){
        cout<<*p<<" ";//Very important concept;*****
        p++;//this is working becouse p store address and adrress of array increase by 4 from starting
    }       //so p++ means it increase address value by 4  
        
        //after p++ in last if get increase the adrress by 4 which is not part of array
        //So after that again keep P++ is equal to p.
        //eg p++=p;
        //So that if we have next code, so we can use the array over there. Otherwise, the array will be dismissed due to increasing the value of p.
}  

    
