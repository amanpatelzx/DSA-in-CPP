#include<iostream>
#include<string>
using namespace std;

int main() {
    string s, t;
    cout << "Enter two strings s and t: ";
    cin >> s >> t;

    if (s.size() != t.size()) {
        cout << "False";
        return 0;
    }

    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (t[i] == t[j]) {
                t[j] = s[i];
            }
        }
    }

    if (s == t) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}
