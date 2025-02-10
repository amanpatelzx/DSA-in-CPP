#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, z;
    cout << "Enter the no. of Element you want to give \n";
    cin >> x;

    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }
    cout << "Enter the no, to whose index sum is \n";
    int b;
    cin >> b;
    cout << "The index are ";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; i < x; j++)
        {

            if ((v[i] + v[j]) == b)
            {
                cout << "(" << i << "," << j << ")" << " ";
            }
        }
    }
}
