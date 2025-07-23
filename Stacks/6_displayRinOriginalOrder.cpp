#include<iostream>
#include<stack>
using namespace std;
void displayRecursion(stack<int> &a){
    if(a.size()==0) return;
    int x=a.top();
    a.pop();
    displayRecursion(a);
    cout<<x<<" ";
    a.push(x);
}
int main(){
    stack<int> a;
    stack<int> b;
    stack<int> c;
    a.push(20);
    a.push(20);
    a.push(20);
    a.push(233);
    a.push(7);
    displayRecursion(a);
}