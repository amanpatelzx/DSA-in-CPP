#include <iostream>
#include <vector>
using namespace std;

void subset(vector<int> ans, vector<int> v, int a, vector<vector<int>>& v1) {
    if (a == v.size()) {
        v1.push_back(ans);
        return;
    }
    subset(ans, v, a + 1, v1);
    ans.push_back(v[a]);
    subset(ans, v, a + 1, v1);
}

int main() {
    int x;
    cout << "Enter the number of elements: ";
    cin >> x;
    vector<int> v(x);
    vector<int> v2;
    vector<vector<int>> v1;
    for (int i = 0; i < x; i++) {
        cin >> v[i];
    }
    subset(v2, v, 0, v1);
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v1[i].size(); j++) {
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
