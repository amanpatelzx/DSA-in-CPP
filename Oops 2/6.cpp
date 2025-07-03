#include<iostream>
using namespace std;

class Gun {
public:
    string gun;
    int ammo;
    int scope; 
    int damage;

    void getAmmo() {
        cout << "Ammo: " << ammo << endl;
    }

    void getScope() {
        cout << "Scope: " << scope << endl;
    }

    void getDamage() {
        cout << "Damage: " << damage << endl;
    }
};

class player {
private:
    int Health;
    int score;
    Gun gun;

    class Helmet {
    public:
        int level;
        int damage;

        void setHelmet1(int level) {
            this->level = level; // ✅ assign first
            if(this->level == 1) damage = 100;
            else if(this->level == 2) damage = 150;
            else damage = 200;
        }

        void showHelmet() {
            cout << "Helmet Level: " << level << endl;
            cout << "Helmet Damage: " << damage << endl;
        }
    };

    Helmet helmet;

public:
    void setScore(int score) {
        this->score = score;
    }

    void setHealth(int health) {
        this->Health = health;
    }

    void getScore() {
        cout << "Score: " << score << endl;
    }

    void getHealth() {
        cout << "Health: " << Health << endl;
    }

    void setGun(Gun gun) {
        this->gun = gun;
    }

    void setHelmet(int level) {
        helmet.setHelmet1(level);  // ✅ FIXED
    }

    void getHelmet() {
        helmet.showHelmet(); // ✅ proper output
    }
};

int main() {
    Gun akm;
    akm.ammo = 112;
    akm.scope = 2;
    akm.damage = 49;

    player Aman;
    Aman.setHealth(100);
    Aman.setScore(12);
    Aman.setGun(akm);
    Aman.setHelmet(3);

    Aman.getHelmet();

    return 0;
}
