#include<iostream>//find minimum no. of meeting room required 
#include<vector>//give array of meeting start time and end time
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>> arr = {{0,30} , {5,10} , {15,20}};
    vector<int> start , ending;
    for(auto ele : arr){
        start.push_back(ele[0]);
        ending.push_back(ele[1]);
    }
    sort(start.begin(), start.end());
    sort(ending.begin(), ending.end());

    int ans = 0;
    int room = 0;
    int i = 0, j = 0;
    while(i<start.size() && j<start.size()){
        if(start[i] < ending[j]){
            room++;
            i++;
            ans = max(ans , room);
        }
        else if(start[i] > ending[j]){
            room--;
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    cout<<ans;
}