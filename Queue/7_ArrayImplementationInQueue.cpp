#include<iostream>
#include<vector>
using namespace std;
class queue{
public:
    vector<int> v;
    int front(){
        return v[0];
    }
    void push(int a){
        v.push_back(a);
    }
    int size(){
        return v.size();
    }
    int back(){
        return v[v.size()-1];
    }
    void pop(){
       v.erase(v.begin());//keep in mind bro
    }
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.back()<<endl;
}