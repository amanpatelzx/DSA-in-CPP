#include <iostream>
#include <vector>
using namespace std;
int x;
void sort(vector<int> &v)
{
    int i = 0;
    int j = x - 1;
    while (i < j)
    {
        int d = v[i];
        if(v[j]==1 ){
            j--;

        }
        else if(v[i]==0){
            i++;
        }

        else if (v[i]==1 and v[j]==0)
        {
            v[i] = v[j];
            v[j] = d;
        }
        
            
    
    }

    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
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