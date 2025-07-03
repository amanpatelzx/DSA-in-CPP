#include<iostream>//how inhetence work
using namespace std;
class vehicle{//Base class or parent class
    public:
    int range;
    int engCapacity;
    string companyName;
    int price;
};
class car : public vehicle{//this is derived class or child or inherent class
    public:
    int steeringSize;
};
class bike : public vehicle{
    public:
    int steeringSize;
};
int main(){
    car bmw;
    bmw.range=300;
    bmw.steeringSize=10;
    bmw.companyName="BMW";

    cout<<bmw.companyName<<endl;
    cout<<bmw.range<<endl;
    cout<<bmw.steeringSize<<endl;
}
