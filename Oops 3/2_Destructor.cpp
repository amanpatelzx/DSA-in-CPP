#include<iostream>//use of constructor as a value initialization
using namespace std;
class bike{
public:
    int range;
    int engineSize;
// its also use as insilising value; i.g;
    bike(int range,int engineSize){
        this->range=range;
        this->engineSize=engineSize;
    }
    // bike(int rs,int es) : range(rs),engineSize(es){} 
    //above code also work for above bike statement, this save line 
    //and this is called initialization list ->asked in interview

    //this is how destructor work;
    ~bike(){
        cout<<"Destructor call hua \n";
    }
};
int main(){
    bike hero(80,100);
    bike tvs(50,150);
    bike bullet(30,250);
    
    bool flag = true;
    if ( flag == true ){
        bike kavasaki(15,1000);
        cout<<kavasaki.range<<" , "<<kavasaki.engineSize<<endl;
    } 

    cout<<hero.range<<" , "<<hero.engineSize<<endl;
    cout<<tvs.range<<" , "<<tvs.engineSize<<endl;
    cout<<bullet.range<<" , "<<bullet.engineSize<<endl;
} //understant about destructor, ye tab call hota hai jab koi
//value apne scope({}) se bahar jata hai;
//understand this by the result of this code