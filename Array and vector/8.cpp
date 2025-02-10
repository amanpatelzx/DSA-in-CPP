#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,7);//initialising vector with its size
    cout<<"The size is "<<v.size()<<endl;
    cout<<"The capacity is "<<v.capacity()<<endl;
    cout<<v[0]<<endl;//after giving 7 above
    cout<<v[1]<<endl;//
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    v.push_back(6);
    cout<<"The capacity is "<<v.capacity()<<endl;
    cout<<v[0]<<endl;//after giving 7 above
    cout<<v[1]<<endl;//all element updated to 7
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<"The capacity is "<<v.capacity()<<endl;

   
    

        
    }

    
 