#include <iostream>
#include <vector>
using namespace std;//not working dimak lagao
void sort(vector<int> &v,vector<int> &v1){
 int n=v.size();
 int m=v1.size();  
int i=n-1;
int j=m-1;
int k=n+m-1;
while (i>=0 and j>=0 ){
    if(v[i]<v1[j]){ 
    v1[k]=v[j];
    j--;
    k++;
}
else {v1[k]=v1[i];
    i--;
    k--;
}
}

    while(j>=0){
        v1[k]=v1[j];
        k--;
        j--;
    }

    while(i>=0){
        v1[k]=v[i];
        k--;
        i--;
    }
    

for (int i = 0; i <(m+n); i++)
    {
        cout << v1[i] << " ";
    }
}

int main()
{
    int x;
    cout << "Enter the no. of Element you want to give \n";
    cin >> x;

    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        v[i]=y;
    }
    int m;
    cout << "Enter the no. of Element you want to give \n";
    cin >> m;

    vector<int> v1(m);
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        v1[i]=n;
    }

    sort(v,v1);
}