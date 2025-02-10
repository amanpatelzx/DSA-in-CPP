#include <iostream>//learn this method
#include <vector>//very important concept
using namespace std;//dutch flag method
void sort(vector<int> &v){
int a=0;
int b=0;
int c=v.size()-1;
while (b<=c){
    if(v[b]==2){ 
        swap(v[b],v[c]);
        c--;
}
    else if(v[b]==0){
        swap(v[b],v[a]);

        b++;
        a++;
    }
    else b++;
    

}
for (int i = 0; i <v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int x;
    cout << "Enter the no. of Element you want to give \n";
    cin >> x;

    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }

    sort(v);
}