class Solution {
public:
bool ifPossible(int i, int j , char test , vector<vector<char>> &arr){
        //row vise
        for(int k = 0; k < arr.size(); k++){
            if( k == j) continue;
            if(arr[i][k] == test) return false;
        }
        //column vise
        for(int k = 0; k < arr.size(); k++){
            if( k == i) continue;
            if(arr[k][j] == test) return false;
        }
        int ith = i/3;
        int jth = j/3;
        ith = 3*ith;
        jth = 3*jth; 
        for(int a = ith; a < ith+3; a++){
            for(int b = jth; b < jth+3; b++){
                if(a == i && j == b) continue;
                if(arr[a][b] == test ) return false;
            }
        }
        return true;                
    }
    bool isValidSudoku(vector<vector<char>>& arr) {
        for(int i = 0; i <arr.size(); i++){
            for(int j = 0; j < arr.size(); j++){
                if(arr[i][j] != '.'){
                    if(ifPossible( i , j , arr[i][j] , arr) == false){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};