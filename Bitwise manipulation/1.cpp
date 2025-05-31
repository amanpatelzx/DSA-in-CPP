#include <iostream>
#include <string>
using namespace std;
int binary_to_decimal(string str) {
    int n = str.size();
    int result = 0;
    for ( int i = 0; i < n; i++ ) {
        int a=0;
        if ( str [ n - 1 - i ] == '0') a = 0;
        else a = 1;
        result = result + (a << ( i ));
    }
    return result;
}
int main() {
    string s = "000111";//1*2^0+1*2^1+1*2^2+0+0+0=1+2+4=7
    cout << binary_to_decimal(s);
}
