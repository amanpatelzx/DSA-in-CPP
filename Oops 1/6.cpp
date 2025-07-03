#include<iostream>
#include<string>
using namespace std;
class book{
public: 
    char bookname; //char;
    int price;

    int countbook(int a){
        if(price<a) return 1;
        else return 0;
    }
    bool isbookpresent(char s){
        if(bookname==s) return true;
        else return false;
    }                                                  
};
int main(){
    book h;
    h.bookname='H';
    h.price=1000;

    cout<<h.countbook(1100)<<endl;
    cout<<h.isbookpresent('A');
}