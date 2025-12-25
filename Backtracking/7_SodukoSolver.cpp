#include<iostream>
#include<vector>
#include<string>
using namespace std;
    bool ifPossible(int i, int j , int test , vector<vector<char>> &arr){
        //row vise
        for(int k = 0; k < arr.size(); k++){
            if(arr[i][k] == test + '0' ) return false;
        }
        //column vise
        for(int k = 0; k < arr.size(); k++){
            if(arr[k][j] == test + '0' ) return false;
        }
        int ith = i/3;
        int jth = j/3;
        ith = 3*ith;
        jth = 3*jth; 
        for(int a = ith; a < ith+3; a++){
            for(int b = jth; b < jth+3; b++){
                if(arr[a][b] == test + '0') return false;
            }
        }
        return true;                
    }
   void f(int i , int j , vector<vector<char>> &arr , bool &check){
        if( i >= arr.size()){
            check = true;
            return;
        }
        if(arr[i][j] != '.'){
           if(j < arr.size()-1)  f(i , j+1 , arr , check);
           else f(i+1 , 0 , arr , check);
        }
        else{
            for(int k = 1; k < 10; k++){
                if(check == true) return;
                if(ifPossible(i , j , k , arr)){
                    arr[i][j] = k + '0';
                    if(j < arr.size()-1)  f(i , j+1 , arr , check);
                    else f(i+1 , 0 , arr , check);
                    if(check == true) return;
                    arr[i][j] = '.';
                }
            }
        }
    }
int main() {
    vector<vector<char>> arr = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    bool check = false;
    f(0, 0, arr, check);

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}