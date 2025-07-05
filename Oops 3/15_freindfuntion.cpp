#include<iostream>
using namespace std;

class Player;

class Game {
public:
    void displayPlayerInfo(Player p);  // friend function declared here
};

class Player {
private:
    string name;
    int health;
    int score;

public:
    Player(string name, int health, int score) {
        this->name = name;
        this->health = health;
        this->score = score;
    }

    // Granting friend access to Game class function
    friend void Game::displayPlayerInfo(Player p);
};

void Game::displayPlayerInfo(Player p) {
    cout << "Player Name: " << p.name << endl;
    cout << "Health: " << p.health << endl;
    cout << "Score: " << p.score << endl;
}

int main() {
    Player p1("Aman", 100, 50);
    Game pubg;

    pubg.displayPlayerInfo(p1);

    return 0;
}
//Bilkul Aman bhai! Chalo step-by-step samajhte hain `friend` ka **definition**, **use**, aur **real-life example** in C++ OOPs style 🔥

---

## 💡 **Friend in C++ (Definition):**

In C++, a `friend` can be:

* a **function**, or
* an **entire class**,

...that is **allowed to access private and protected members** of another class — even though it's not a member of that class.

---

### 🔐 Normally:

Private members of a class can **only** be accessed by that class's own member functions.

```cpp
class A {
private:
    int x = 10;
public:
    void show() {
        cout << x;  // ✅ valid
    }
};
```

But if an **outside function** or class wants to access `x`, **you need to declare it as a `friend`**.

---

## 📘 **Syntax:**

### 1. Friend Function:

```cpp
class A {
    private:
        int data;
        friend void showData(A a);  // ✅ function is declared friend
};
```

### 2. Friend Class:

```cpp
class A {
    private:
        int data;
        friend class B;  // ✅ Class B can access all private members of A
};
```

---

## 🧪 **Why do we use `friend` in real life?**

### ✅ Use Cases:

#### 1. **When two classes are tightly related**

Example: A `Game` class and a `Player` class. The game might need access to player's private health or inventory, but without writing dozens of getters.

#### 2. **Operator Overloading**

Often you overload `<<`, `+`, `==`, etc. using **friend functions** so that they can access internal data.

#### 3. **Utility Functions**

Sometimes you want a helper function that needs access to internal members but you **don’t want to expose those members publicly** (for encapsulation).

#### 4. **Performance**

Friend functions can be slightly faster than public getter/setter methods in performance-critical code.

---

## 🎮 **Real-Life Inspired Example:**

Imagine a **game app**, where:

* `Player` has private health and score.
* `GameEngine` (external class) needs to update health when damage is taken.

```cpp
#include<iostream>
using namespace std;

class Player {
private:
    string name;
    int health;

public:
    Player(string n) {
        name = n;
        health = 100;
    }

    void show() {
        cout << name << "'s Health: " << health << endl;
    }

    // GameEngine is friend
    friend class GameEngine;
};

class GameEngine {
public:
    void damage(Player &p, int dmg) {
        p.health -= dmg;
        if(p.health < 0) p.health = 0;
    }
};

int main() {
    Player p1("Aman");
    GameEngine pubg;

    p1.show();              // Aman’s Health: 100
    pubg.damage(p1, 30);    // 30 damage
    p1.show();              // Aman’s Health: 70

    return 0;
}
```

---

### 💬 Output:

```
Aman's Health: 100
Aman's Health: 70
```

---

## 🧠 Summary

| Feature       | Friend Function                 | Friend Class                          |
| ------------- | ------------------------------- | ------------------------------------- |
| Access        | Specific function only          | All member functions of that class    |
| Encapsulation | Slightly broken                 | More exposed                          |
| Use Case      | Operator overload, close helper | Tight integration between two classes |

---

Bhai agar tu game, bank system, ya library system bana raha hai, to `friend` ka use **bohot powerful** ban jaata hai when one class needs special access to another class's internal data — **without breaking full encapsulation** 💡

Aur kuch real examples chahiye kya? Ya `friend` ke saath operator overloading samjhaun? 😄

Sahi hai Aman bhai! 🔥
Chal ab main tujhe **`friend` ke saath operator overloading** ka mazedaar example deta hoon — real world type, line by line samajh aayega 💯

---

## ⚔️ Situation:

Soch le tu ek `Player` class bana raha hai. Har player ka **score** hai. Tu chahta hai ki:

> `Player1 + Player2` karne se dono ka score add ho jaaye!

Ab `+` operator normally objects pe kaam nahi karta. Par agar tu `+` ko overload kare through a **friend function**, to tu yeh kar sakta hai.

---

## ✅ Code with `friend operator+` Overload:

```cpp
#include<iostream>
using namespace std;

class Player {
private:
    string name;
    int score;

public:
    Player(string n, int s) {
        name = n;
        score = s;
    }

    // friend function to overload +
    friend int operator+(Player p1, Player p2);

    // Show function
    void show() {
        cout << name << "'s Score: " << score << endl;
    }
};

// ✅ Operator overloading using friend
int operator+(Player p1, Player p2) {
    return p1.score + p2.score;
}

int main() {
    Player aman("Aman", 40);
    Player gaurav("Gaurav", 60);

    aman.show();      // Aman’s Score: 40
    gaurav.show();    // Gaurav’s Score: 60

    // Adding scores using overloaded +
    int total = aman + gaurav;

    cout << "Combined Score: " << total << endl;

    return 0;
}
```

---

### 🧾 Output:

```
Aman's Score: 40
Gaurav's Score: 60
Combined Score: 100
```

---

## 🔍 Breakdown:

* `friend int operator+(Player p1, Player p2);`

  * Yeh function dono `Player` objects ke private members (score) ko access kar sakta hai.
  * Kyunki ye `friend` hai.
* `int operator+(Player p1, Player p2)`:

  * Yeh actual function hai jo `+` operator ko redefine karta hai for `Player` objects.

---

## 🧠 Real-life use of operator overloading:

| Use Case                    | Description                         |
| --------------------------- | ----------------------------------- |
| `BankAccount + BankAccount` | Merge balances                      |
| `Matrix1 + Matrix2`         | Add 2 matrices                      |
| `Time + Time`               | Add hours and minutes               |
| `Player1 + Player2`         | Combine stats (like in our example) |

---

## 🔥 Want to Overload `<<` Operator Too?

Yeh tu likh ke easily object ko `cout << object` se print kar sakta hai!

```cpp
friend ostream& operator<<(ostream &out, Player p);
```

Bata bhai agar wo bhi chahiye — tujhe ek dum **pro-level printing** sikha deta hoon 😎
Tu ready ho?
