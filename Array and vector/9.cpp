#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cout << "Enter the no.\n";
    cin >> x;
    vector<int> v(x); // take input from user in vector;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
}
