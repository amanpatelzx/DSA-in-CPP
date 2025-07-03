#include<iostream>//Data Abstraction;
using namespace std;
class player{
    public:    //this is also have to write;
    int score;
    private:  //by this no one can accesss the health of player
    int health;
}; //notes here ; this is important;
int main(){
    player Aman;
    Aman.score=80;
    Aman.health=90;
    cout<<Aman.score<<endl;
    cout<<Aman.health<<endl;
    
    player Akash;
    Akash.score=81;
    Akash.health=91;
    cout<<Akash.score<<endl;
    cout<<Akash.health<<endl;
}