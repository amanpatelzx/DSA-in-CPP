#include<iostream>//grumpy book store owner
#include<vector>//no we will use sliding window
#include<algorithm>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int n=customers.size();
    int m=minutes;
    int ssum=0;
    for(int i=0;i<m;i++){
        ssum+=customers[i]*grumpy[i];
    }
    int j=m;
    int i=1;
    int maxsum=ssum;
    int idx=0;
    while(j<n){
        ssum=ssum+customers[j]*grumpy[j]-customers[i-1]*grumpy[i-1];
        if(ssum>maxsum){
            maxsum=ssum;
            idx=i;
        }
        i++;
        j++;
    }
    cout<<maxsum<<" "<<idx<<endl;
    int ans=0;
     for(int i=idx;i<idx+m;i++){
        grumpy[i]=0;
    }
    for(int i=0;i<n;i++){
        if(grumpy[i]==0) ans+=customers[i];
    }
    return ans;
}
int main(){
    vector<int>customers={1,0,1,2,1,1,7,5};
    vector<int>grumpy={0,1,0,1,0,1,0,1};
    int minutes=3;
    cout<<"The maximum : ";
    cout<<maxSatisfied(customers,grumpy,minutes);
}