#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;//remember this comparator
static bool cmp( vector<int> &v1, vector<int> &v2){
        if(v1[1] == v2[1]) return v1[0] > v2[0];
        else return v1[1] > v2[1];
    }
    int f(vector<vector<int>>& arr, int truckSize){
        sort(arr.begin(), arr.end(), cmp);
        int ans = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i][0] <= truckSize){
                ans += arr[i][1] * arr[i][0];
                truckSize -= arr[i][0];
            }
            else{
                ans += truckSize * arr[i][1];
                truckSize = 0;
                break;
            }
        }
        return ans;
    }
      // static bool cmp( pair<int,int> &p1 , pair<int,int> &p2){
    //     int r1 = p1.second;
    //     int r2 = p2.second;
    //     return r1 > r2;
    // }
    // int f(vector<vector<int>>& boxTypes, int truckSize){
    //     vector<pair<int,int>> arr;
    //     for(int i=0; i<boxTypes.size(); i++){
    //         arr.push_back({boxTypes[i][0] , boxTypes[i][1]});
    //     }
    //     sort(arr.begin(), arr.end(), cmp);
    //     int ans = 0;
    //     for(int i = 0; i<arr.size(); i++){
    //         if(arr[i].first <= truckSize){
    //             ans += arr[i].second * arr[i].first;
    //             truckSize -= arr[i].first;
    //         }
    //         else{
    //             ans += truckSize * arr[i].second;
    //             truckSize = 0;
    //             break;
    //         }
    //     }
    //     return ans;
    // }
int main(){
    vector<vector<int>> arr = {{5,10},{2,5},{4,7},{3,9}};
    int truckSize = 10;
    cout<< f(arr, truckSize);
}