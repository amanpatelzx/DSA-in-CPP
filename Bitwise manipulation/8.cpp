#include<iostream>
using namespace std;

int main() {
    int a = 50;
    int c = ~0;  // All bits set to 1
    cout << (a ^ c) << endl;  // Flips all bits
}