#include<iostream>//finding no. of digits without using loop;
#include<string>
using namespace std;
int main(){
    long long x;
    cout<<"Enter the no. ";
    cin>>x;
    string s=to_string(x);
    cout<<s.size();
    cout<<endl;
    cout<<s.length();

}
