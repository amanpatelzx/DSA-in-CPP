#include<iostream>
using namespace std;
class player{
private: 
    int score;
    int health;
    bool alive;

public:
    void setScore(int score){
        this->score=score;
    }
    void setHealth(int health){
        this->health=health;
    }
    bool setAlive(bool alive){
        this->alive=alive;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
    bool getAlive(){
        return alive;
    }
};

player getMaxScore(player a,player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}

int main(){
    player Aman;
    Aman.setScore(100);
    Aman.setAlive(20);
    Aman.setHealth(true);
    
    player Akash;
    Akash.setScore(110);
    Akash.setAlive(22);
    Akash.setHealth(false);

    player Ans=getMaxScore(Aman,Akash);
    cout<<Ans.getScore();
}
