#include <iostream>
#include <string>
using namespace std;
int binary_to_decimal(string str) {
    int n = str.size();
    int result = 0;
    for ( int i = 0; i < n; i++ ) {
        result += (str [ n - 1 - i ] - '0' << ( i ));
    }
    return result;
}
string decimal_to_binary( int a ){
    string s = "";
    while ( a != 0){
    int b = a % 2;
    if(b==0) s = "0" + s;
    else s = "1" + s;
    a = a/2;
    }
    return s;
}
int main() {
    string s = "1000";//1*2^0+1*2^1+1*2^2+0+0+0=1+2+4=7
    int a = 1111117876;
    cout << binary_to_decimal( s ) << "\n";
    cout << decimal_to_binary( a );
}

 