#include<iostream>
using namespace std;

class player{
    private:
    int Health;
    int score;

    public:
    void setScore(int score){
        this->score=score;
    }
    void setHealth(int health){
        Health=health;
    }
    void getScore(){
        cout<<score<<endl;
    }
    void getHealth(){
        cout<<Health<<endl;
    }
};
int main(){
    player Aman;//this is static memory allocation
    Aman.setHealth(10);//this is in stating given to ram;even it run or not
    Aman.setScore(20);

    Aman.getScore();
    Aman.getHealth();

    cout<<endl;

    player *Akash=new player;//this is dynamic memory allocation
    Akash->setHealth(30);//this given when it requird , means when this code run
    Akash->setScore(45);

    Akash->getHealth();//here int place of . we use -> in pointer.
    Akash->getScore();//learn above; this is only in c++, not in java
    (*Akash).getHealth();//this another way;
}
