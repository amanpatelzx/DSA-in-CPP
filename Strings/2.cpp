#include <iostream>
using namespace std;
int main(){
    char str[3] = {'a', 'b', 'c'};
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    cout << str;
    cout << endl;
    char btr[] = {'a', 'b', '\0', 'c'};
    for (int i = 0; btr[i] != '\0'; i++)
    {
        cout << btr[i] << " ";
    }
}
