#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the no of element\n";
    cin >> x;
    int a[x];
    cout << "ENter the element\n";
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    int b;
    cout << "Enter the no. that you want to search\n";
    cin >> b;
    bool f = 0;
    for (int i = 0; i < x; i++)
    {
        if (a[i] == b)
            f = 1;
    }
    if (f == 1)
        cout << "Present";
    else
        cout << "not present";
}