#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>//leetcode 1011
using namespace std;
void helper(vector<int>&v,int d,int avg,int i,int l){
    int j=0;
     while(i<=d){
                int s=0;
                while(s<=avg && j<v.size()){
                    s+=v[j];
                    if(s>avg) break;
                    j++;
                }
                // cout<<j-1<<"-"<<endl;
                i++;
            }
        if(j==v.size()){
            cout<<"Anser is -> "<<avg;
            return;
        }
        else if(j!=v.size()) helper(v,d,avg+1,1,l); 
}
int shipWithinDays(vector<int>&v, int d) {
    int sum=0;
    int l=INT_MIN;
            for(int i=0;i<v.size();i++){
                sum+=v[i];
                if(v[i]>l) l=v[i];
            }
            cout<<sum<<endl;
            int rest=0;
            int avg=sum/d;
            cout<<avg<<endl;
            cout<<l<<endl;
            if(l>avg) avg=l;
            int i=1;
            helper(v,d,avg,i,l);
    }
int main(){
    int x=5;
    vector<int> arr={10,50,100,100,50,100,100,100 };
    shipWithinDays(arr,x);
    }
