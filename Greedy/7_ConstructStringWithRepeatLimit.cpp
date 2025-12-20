#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<algorithm>
using namespace std;
string repeatLimitedString(string s, int repeatLimit) {
        sort(s.begin(),s.end());
        unordered_map<char,int> m;
        for( int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        priority_queue<pair<char,int>> pq;
        for(auto ele : m){
            pq.push({ ele.first , ele.second });
        }
        string ans = "";
        while(!pq.empty()){
            pair<char,int> temp = pq.top();
            pq.pop();
            if(temp.second > repeatLimit){
                int len = temp.second - repeatLimit;
                pair<char , int > secondLargest;
                if(!pq.empty()) {
                    secondLargest = pq.top();
                    pq.pop();
                    
                for(int i = 0; i < repeatLimit; i++){
                    ans += temp.first;
                }
                ans += secondLargest.first;
                if(secondLargest.second - 1 > 0) pq.push({secondLargest.first, secondLargest.second-1});
                pq.push({temp.first, len});
            }
                else{
                    for(int i = 0; i < repeatLimit; i++){
                    ans += temp.first;
                }
                }

            }
            else{
                for(int i = 0; i < temp.second; i++){
                    ans += temp.first;
                }
            }

        }
        return ans;
    }
int main(){
    cout<< repeatLimitedString( "cczazcc" , 3);
}