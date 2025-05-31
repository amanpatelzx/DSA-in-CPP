#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={2,-3,4,4,-7,-1,4,-2,6};
    vector<int>ans;
    int n=v.size();
    int k=3;
    int fn=0;
    for(int i=0;i<k;i++){
        if(v[i]<0){
            fn=i;
            break;
        }
    }
    int i=0,j=k;
    while(j<n){
        if(fn>=i and fn<=j) ans.push_back(v[fn]);
        else {
            for(int k=i;k<j;k++){
                if(v[k]<0){
                    fn=k;
                    break;
                }
            }
            ans.push_back(v[fn]);
        }
        i++;
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}