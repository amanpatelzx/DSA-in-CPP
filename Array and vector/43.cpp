#include <iostream>
#include <vector>
using namespace std;

long long x;
void rain(long long a){
long long k=1;
for(long long i=1; i<=a;i++){
    k=k*i;

}
cout<<"Your require result is "<<k;
}

int main() {
    cout << "Enter the number of elements you want to give: ";
    cin >> x;

    rain(x);
}
