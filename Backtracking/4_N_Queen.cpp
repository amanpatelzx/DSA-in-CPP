#include<iostream>
#include<vector>
using namespace std;
int count = 0;
void f( int n , int row , vector<vector<string>> &ans ,vector<string> &temp){
        if( row == n ){
            count++;
           ans.push_back(temp);
           int sizeOfAns = ans.size();
            for(int i = 0; i < n; i++){
                    for(int  k = 0;  k < n; k++){
                        if(ans[sizeOfAns-1][i][k] == 'X') ans[sizeOfAns-1][i][k] = '.';
                    }
                }
            return ;
        }
        for(int j = 0; j < n; j++){
            if(temp[row][j] == 'X'){
                continue;
            }
             else{
                vector<string> copy = temp;
                temp[row][j] = 'Q';
                for(int i = 0; i < n; i++){
                    for(int  k = 0;  k < n; k++){
                            if(i == row && temp[i][k] != 'Q') temp[i][k] = 'X';
                            if(k == j && temp[i][k] != 'Q') temp[i][k] = 'X';
                            if( i == k && row+i < n && j+k < n && temp[row+i][j+k] != 'Q') temp[row+i][j+k] = 'X';
                            if( i == k && row+i < n && j-k >= 0 && temp[row+i][j-k] != 'Q') temp[row+i][j-k] = 'X';
                            if( i == k && row-i >= 0 && j+k < n && temp[row-i][j+k] != 'Q') temp[row-i][j+k] = 'X';
                            if( i == k && row-i >= 0 && j-k > 0 && temp[row-i][j-k] != 'Q') temp[row-i][j-k] = 'X';
                    }
                }
                f(n , row + 1 , ans , temp);
                temp = copy;
            }
        }
        return;
    }
int main(){
    int n = 8;
    vector<vector<string>> ans;
        vector<string> temp;
        string s = "";
        for(int i = 0; i < n; i++){
            s += ".";
        }
        for(int i = 0; i < n; i++){
            temp.push_back(s);
        }
        f( n , 0 , ans , temp);
        
        // for(int i=0; i<temp.size();i++){
        //     cout<<temp[i]<<endl;
        // }
        cout<<endl;
        cout<<count<<" -> Posible Combinations"<<endl;
        cout<<endl;
        // for(int i = 0; i < ans.size(); i++){
        //     for(int j = 0; j < ans[0].size(); j++){
        //         cout<<ans[i][j]<<endl;
        //     }
        //     cout<<endl;
        // }
}