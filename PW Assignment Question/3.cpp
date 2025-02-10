// Q3. A function countAndSay is defined as:
// countAndSay(1) = “1”
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then
// converted into a different digit string.
// So, if sample input is n = 4,
// countAndSay(1) = 1
// countAndSay(2) = “one 1” => 11
// countAndSay(3) = “two 1” => 21
// countAndSay(4) = “one 2 one 1” => 1211
#include<iostream>
#include<vector>
using namespace std;
void countAndSay(vector<vector<int>>&v,int x,int a){
    vector<int>ans;
    if(a==x-1) return;
    for(int i=0;i<v[a].size();i++){
    int sum=0;
        if(i>0 and v[a][i]==v[a][i-1] ) continue;
    for(int j=i;j<v[a].size();j++){
        if(v[a][j]==v[a][i]) sum++;
        else break;
    } 
    ans.push_back(sum);
    ans.push_back(v[a][i]);
    }
    v.push_back(ans);
    countAndSay(v,x,a+1);
}
int main(){
    int x;
    cout<<"Enter the no. -> ";
    cin>>x;
    vector<vector<int>>v(1);
    v[0]={1};
countAndSay(v,x,0);
for(int i=v.size()-1;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
}
