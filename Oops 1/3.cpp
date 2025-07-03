#include<iostream>
using namespace std;
class player{
    public:   
    int score;
    int health;

    void showhealth(){ //you can make funtin inside this class
        cout<<"Health is "<<health<<endl;;
    }
};
int main(){
    player Aman;
    Aman.score=80;
    Aman.health=90;
    cout<<Aman.score<<endl;
    cout<<Aman.health<<endl;
    Aman.showhealth();
    
    player Akash;
    Akash.score=81;
    Akash.health=91;
    cout<<Akash.score<<endl;
    cout<<Akash.health<<endl;


}