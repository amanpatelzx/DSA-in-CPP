#include<iostream>//constructor overloading
using namespace std;
class bike{
public:
    int range;
    int engineSize;
    bike(int rs,int es) : range(rs),engineSize(es){} 
    bike(int rs) : range(rs),engineSize(300){}
    bike() : range(40),engineSize(400){}
};
int main(){
    bike hero(80,100);
    bike tvs(50);
    bike bullet;
    bool flag = true;
    if ( flag == true ){
        bike kavasaki(15,1000);
        cout<<kavasaki.range<<" , "<<kavasaki.engineSize<<endl;
    } 
    cout<<hero.range<<" , "<<hero.engineSize<<endl;
    cout<<tvs.range<<" , "<<tvs.engineSize<<endl;
    cout<<bullet.range<<" , "<<bullet.engineSize<<endl;
}
//this is called constructor overloading;