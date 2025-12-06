#include<iostream>//not woking properly , see solution in next one
using namespace std;
string f(string str1, string str2 , int i, int j){
        if ( i >= str1.size() || j >= str2.size() ) return "";
        if( str1[i] == str2[j] ) return str1[i] + f( str1 , str2 , i+1, j+1 );
        else{
            int a = f( str1 , str2 , i+1 , j).size();
            int b = f( str1 , str2 , i , j+1).size();
            if( a > b) return f( str1 , str2 , i+1 , j);
            else return f( str1 , str2 , i , j+1);
        }
}
int main(){
    // string str1 = "abac";
    // string str2 = "cab";
    string str1 = "bcaaacbbbcbdcaddadcacbdddcdcccdadadcbabaccbccdcdcbcaccacbbdcbabb";
    string str2 = "dddbbdcbccaccbababaacbcbacdddcdabadcacddbacadabdabcdbaaabaccbdaa";
    string s = f( str1, str2 , 0, 0);
    cout<< s;
    cout<<endl;
        int i = 0, j = 0, k = s.size() , c = 0;
        string ans = "";
        while( i < str1.size()){
            if(str1[i] != s[c]){
                ans += str1[i];
                i++;
            }
            if( str1[i] == s[c]){
                while( str2[j] != s[c]){
                    ans += str2[j];
                    j++;
                }
                ans += str1[i];
                i++;
                c++;
                j++;
            }
            if( c >= k){
                while( i < str1.size()){
                    ans += str1[i];
                    i++;
                }
                while( j < str2.size()){
                    ans += str2[j];
                    j++;
                }
            }

        }
        cout<<ans;
    
}