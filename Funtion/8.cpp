#include <iostream>//concept og double star
using namespace std;
int main(){
   int x=5;
    int *p=&x;
    int **p1=&p;
    cout<<&x<<" "<<p<<" "<<(*p1);
}
   