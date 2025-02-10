#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v){
int a=0;
int b=0;
int c=0;

for(int i=0; i<v.size(); i++){
    if(v[i]==0) a++;
    else if (v[i]==1) b++;
    else if(v[i]==2) c++;


}
for(int i=0; i<v.size(); i++){
    if(i<a) v[i]=0;
    else if(i<(a+b) and i>=a) v[i]=1;
    if(i<(a+b+c) and i>=(a+b)) v[i]=2;

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