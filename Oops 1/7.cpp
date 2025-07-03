#include<iostream>
#include<string>
using namespace std;
class book{
public: 
    string bookname;//string also work;
    int price;

    int countbook(int a){
        if(price<a) return 1;
        else return 0;
    }
    bool isbookpresent(string s){
        if(bookname==s) return true;
        else return false;
    }                                                  
};
int main(){
    book h;
    h.bookname="Harry";
    h.price=1000;

    cout<<h.countbook(1100)<<endl;
    cout<<h.isbookpresent("Harry");
}