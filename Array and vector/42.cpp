#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int x;

void store(vector<int>& v, int a, int b) {
    int d = 0;
    int e = a;
    int h = 0;

    for (int i = a; i < x - b - 1; i++) {
        int g = e;
        int m = v[e];

        for (int j = e; j < x - b - 1; j++) {
            if (m < v[j]) {
                m = v[j];
                g = j;
                break;
            }
        }

        if (g != e) {
            h = 0;
        } else {
            h = 1;
        }

        if (h == 1) {
            int n = INT_MIN;
            for (int k = e + 1; k < x - b; k++) {
                if (n < v[k]) {
                    n = v[k];
                    g = k;
                }
            }
            m = n;
        }

        for (int j = e; j < g; j++) {
            e++;
            int c = (v[e] - v[j]);
            d += c;
        }

        if (e == x - b - 1) {
            break;
        }
    }

    cout << "Your required result is " << d << endl;
}

void rain(vector<int>& v) {
    int a = 0, b = 0;

    for (int i = 0; i < x - 1; i++) {
        if (v[i] > v[i + 1]) {
            a = i;
            break;
        }
    }

    for (int i = 0; i < x - 1; i++) {
        if (v[x - 1 - i] > v[x - 2 - i]) {
            b = i;
            break;
        }
    }

    store(v, a, b);
}

int main() {
    cout << "Enter the number of elements you want to give: ";
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++) {
        cin >> v[i];
    }

    rain(v);
    return 0;
}
