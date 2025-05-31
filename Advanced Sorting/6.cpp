#include<iostream>//inversion count
#include<vector>//brute force methtod;.
using namespace std;
int main(){
    vector<int> arr={5,1,8,2,3};
    int count=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]>arr[j]) count++;
        }
    }
    cout<<count;
}