#include<iostream>
using namespace std;
class Gun{
    public:
    string gun;
    int ammo;
    int scope; 
    int damage;
    void getAmmo(){
        cout<<ammo<<endl;
    }
    void getScope(){
        cout<<scope<<endl;
    }
    void getDamage(){
        cout<<damage<<endl;
    }
};

class player{
    private:
    int Health;
    int score;
    Gun gun; //here you can use other class in different class;

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
    Gun setGun(Gun gun){
        this->gun=gun;
    }
};
int main(){
    Gun akm;
    akm.ammo=112;
    akm.scope=2;
    akm.damage=49;
    
    player Aman;
    Aman.setHealth(100);
    Aman.setScore(12);
    Aman.setGun(akm);

    akm.getAmmo();
    akm.getDamage();
    akm.getScope();
    
}

