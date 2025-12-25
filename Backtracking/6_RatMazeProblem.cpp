#include<iostream>
#include<vector>
#include<string>
using namespace std;
       void f(int i , int j , vector<vector<int>> &arr, vector<string>&ans , string &temp ,vector<vector<bool>>& dp){
        if(i == arr.size()-1 && j == arr.size()-1){
            ans.push_back(temp);
            return;
        }
        
        dp[i][j] = true;
        if(i+1 < arr.size() && arr[i+1][j] == 1 && dp[i+1][j] == false){
            temp += "D";
            f(i+1 , j , arr , ans , temp, dp);
            temp.pop_back();
        }
        if(j-1 >=0 && arr[i][j-1] == 1 && dp[i][j-1] == false){
            temp += "L";
            f(i , j-1 , arr , ans , temp, dp);
            temp.pop_back();
        }
        if(j+1 < arr[0].size() && arr[i][j+1] == 1 && dp[i][j+1] == false){
            temp += "R";
            f(i , j+1 , arr , ans , temp , dp);
            temp.pop_back();
        }
        if(i-1 >= 0 && arr[i-1][j] == 1 && dp[i-1][j] == false){
            temp += "U";
            f(i-1 , j , arr , ans , temp, dp);
            temp.pop_back();
        }
        dp[i][j] = false;
        return;
    }
    int main(){
        vector<vector<int>> arr = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
        vector<string> ans;
        vector<vector<bool>> dp(arr.size()+1 , vector<bool>(arr[0].size()+1 , false));
        // dp[0][0] = true;
        string temp = "";
        f( 0 , 0 , arr , ans , temp , dp);
        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<< " ";
        }
    }