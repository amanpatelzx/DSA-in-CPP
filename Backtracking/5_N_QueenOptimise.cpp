#include<iostream>
#include<vector>
using namespace std;
int count = 0;
bool canPlaceQueen(int n , int row , int j , vector<string> &temp){
    //upward check
    for(int i = row-1; i >= 0; i--){
        if(temp[i][j] == 'Q') return false;
    }
    //diagonal left upward check
    for(int i = row-1 , k = j-1 ; i >= 0 and k >= 0; i-- , k--){
        if(temp[i][k] == 'Q') return false;
    }
    //diagonal right upward check
    for(int i = row-1 , k = j+1 ; i >= 0 and k < n; i-- , k++){
        if(temp[i][k] == 'Q') return false;
    }
    return true;
}
void f( int n , int row , vector<vector<string>> &ans ,vector<string> &temp){
        if( row == n ){
            count++;
            ans.push_back(temp);
            return ;
        }
        for(int j = 0; j < n; j++){
            if(canPlaceQueen( n , row , j , temp)){
                temp[row][j] = 'Q';
                f( n , row+1 , ans , temp);
                temp[row][j] = '.';
            }
        }
        return;
    }
int main(){
    int n = 4;
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
        for(int i = 0; i < ans.size(); i++){
            for(int j = 0; j < ans[0].size(); j++){
                cout<<ans[i][j]<<endl;
            }
            cout<<endl;
        }
}