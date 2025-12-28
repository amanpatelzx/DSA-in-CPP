#include<iostream>
#include<vector>
using namespace std;
int count = 0;
bool canPlaceQueen(int n , int row , int j , vector<string> &temp , int &verticalMask , int &leftDiagonalMask , int &rightDiagonalMask){
    //upward check
    if(((1 << j) & verticalMask ) == 0) return false;
    //diagonal left upward check
    if( ((1 << (n-1-row + j)) & leftDiagonalMask) == 0 ) return false;
    //diagonal right upward check
    if( ((1 << (row + j)) & rightDiagonalMask) == 0 ) return false;
    return true;
}
void f( int n , int row , vector<vector<string>> &ans ,vector<string> &temp , int &verticalMask , int &leftDiagonalMask , int &rightDiagonalMask){
        if( row == n ){
            ans.push_back(temp);
            count++;
            return ;
        }
        for(int j = 0; j < n; j++){
            if(canPlaceQueen( n , row , j , temp , verticalMask , leftDiagonalMask , rightDiagonalMask)){
                temp[row][j] = 'Q';
                verticalMask = ((1 << j) ^ verticalMask); 
                leftDiagonalMask = ((1 << (n-1-row + j)) ^ leftDiagonalMask);
                rightDiagonalMask = ((1 << (row + j)) ^ rightDiagonalMask);

                f( n , row+1 , ans , temp , verticalMask , leftDiagonalMask , rightDiagonalMask);

                temp[row][j] = '.';
                verticalMask = ((1 << j) ^ verticalMask); 
                leftDiagonalMask = ((1 << (n-1-row + j)) ^ leftDiagonalMask);
                rightDiagonalMask = ((1 << (row + j)) ^ rightDiagonalMask);
            }
        }
        return;
    }
int main(){
    int n = 15;
    vector<vector<string>> ans;
        vector<string> temp;
        string s = "";
        for(int i = 0; i < n; i++){
            s += ".";
        }
        for(int i = 0; i < n; i++){
            temp.push_back(s);
        }
        int verticalMask = ((1<<n) - 1);
        int leftDiagonalMask =  ((1<<(2*n-1)) -1);
        int rightDiagonalMask =  ((1<<(2*n-1)) -1);
        f( n , 0 , ans , temp , verticalMask , leftDiagonalMask , rightDiagonalMask);
        
        // for(int i=0; i<temp.size();i++){
        //     cout<<temp[i]<<endl;
        // }
        cout<<endl;
        cout<<count<<" -> Posible Combinations"<<endl;
        // cout<<endl;
        // for(int i = 0; i < ans.size(); i++){
        //     for(int j = 0; j < ans[0].size(); j++){
        //         cout<<ans[i][j]<<endl;
        //     }
        //     cout<<endl;
        // }
}