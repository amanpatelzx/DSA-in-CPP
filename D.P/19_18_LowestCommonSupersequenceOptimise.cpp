#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// string f( string &str1 , string &str2) {
//     int n = str1.size();
//     int m = str2.size();
//     vector<vector<string>> dp(n+1, vector<string>(m+1, ""));
//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = m - 1 ; j >= 0; j--) {
//             if (str1[i] == str2[j]) {
//                 dp[i][j] = str1[i] + dp[i+1][j+1];
//             } 
//             else {
//                 if (dp[i+1][j].size() > dp[i][j+1].size())
//                     dp[i][j] = dp[i+1][j];
//                 else
//                     dp[i][j] = dp[i][j+1];
//             }
//         }
//     }
//     return dp[0][0];
// }
    string f(string a, string b) {
    int n = a.size();
    int m = b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i-1] == b[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    string ans = "";
    int i = n, j = m;
    while(i > 0 && j > 0) {
        if(a[i-1] == b[j-1]) {
            ans += a[i-1];
            i--; j--;
        }
        else {
            if(dp[i-1][j] > dp[i][j-1]) i--;
            else j--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string str1 = "atdznrqfwlfbcqkezrltzyeqvqemikzgghxkzenhtapwrmrovwtpzzsyiwongllqmvptwammerobtgmkpowndejvbuwbporfyroknrjoekdgqqlgzxiisweeegxajqlradgcciavbpgqjzwtdetmtallzyukdztoxysggrqkliixnagwzmassthjecvfzmyonglocmvjnxkcwqqvgrzpsswnigjthtkuawirecfuzrbifgwolpnhcapzxwmfhvpfmqapdxgmddsdlhteugqoyepbztspgojbrmpjmwmhnldunskpvwprzrudbmtwdvgyghgprqcdgqjjbyfsujnnssfqvjhnvcotynidziswpzhkdszbblustoxwtlhkowpatbypvkmajumsxqqunlxxvfezayrolwezfzfyzmmneepwshpemynwzyunsxgjflnqmfghsvwpknqhclhrlmnrljwabwpxomwhuhffpfinhnairblcayygghzqmotwrywqayvvgohmujneqlzurxcpnwdipldofyvfdurbsoxdurlofkqnrjomszjimrxbqzyazakkizojwkuzcacnbdifesoiesmkbyffcxhqgqyhwyubtsrqarqagogrnaxuzyggknksrfdrmnoxrctntngdxxechxrsbyhtlbmzgmcqopyixdomhnmvnsafphpkdgndcscbwyhueytaeodlhlzczmpqqmnilliydwtxtpedbncvsqauopbvygqdtcwehffagxmyoalogetacehnbfxlqhklvxfzmrjqofaesvuzfczeuqegwpcmahhpzodsmpvrvkzxxtsdsxwixiraphjlqawxinlwfspdlscdswtgjpoiixbvmpzilxrnpdvigpccnngxmlzoentslzyjjpkxemyiemoluhqifyonbnizcjrlmuylezdkkztcphlmwhnkdguhelqzjgvjtrzofmtpuhifoqnokonhqtzxmimp";
    string str2 = "xjtuwbmvsdeogmnzorndhmjoqnqjnhmfueifqwleggctttilmfokpgotfykyzdhfafiervrsyuiseumzmymtvsdsowmovagekhevyqhifwevpepgmyhnagjtsciaecswebcuvxoavfgejqrxuvnhvkmolclecqsnsrjmxyokbkesaugbydfsupuqanetgunlqmundxvduqmzidatemaqmzzzfjpgmhyoktbdgpgbmjkhmfjtsxjqbfspedhzrxavhngtnuykpapwluameeqlutkyzyeffmqdsjyklmrxtioawcrvmsthbebdqqrpphncthosljfaeidboyekxezqtzlizqcvvxehrcskstshupglzgmbretpyehtavxegmbtznhpbczdjlzibnouxlxkeiedzoohoxhnhzqqaxdwetyudhyqvdhrggrszqeqkqqnunxqyyagyoptfkolieayokryidtctemtesuhbzczzvhlbbhnufjjocporuzuevofbuevuxhgexmckifntngaohfwqdakyobcooubdvypxjjxeugzdmapyamuwqtnqspsznyszhwqdqjxsmhdlkwkvlkdbjngvdmhvbllqqlcemkqxxdlldcfthjdqkyjrrjqqqpnmmelrwhtyugieuppqqtwychtpjmloxsckhzyitomjzypisxzztdwxhddvtvpleqdwamfnhhkszsfgfcdvakyqmmusdvihobdktesudmgmuaoovskvcapucntotdqxkrovzrtrrfvoczkfexwxujizcfiqflpbuuoyfuoovypstrtrxjuuecpjimbutnvqtiqvesaxrvzyxcwslttrgknbdcvvtkfqfzwudspeposxrfkkeqmdvlpazzjnywxjyaquirqpinaennweuobqvxnomuejansapnsrqivcateqngychblywxtdwntancarldwnloqyywrxrganyehkglbdeyshpodpmdchbcc";
    // string str1 = "abac";
    // string str2 = "cab";
    // string str1 = "bcaaacbbbcbdcaddadcacbdddcdcccdadadcbabaccbccdcdcbcaccacbbdcbabb";
    // string str2 = "dddbbdcbccaccbababaacbcbacdddcdabadcacddbacadabdabcdbaaabaccbdaa";
    vector<vector<string>> dp( str1.size()+1 , vector<string>(str2.size()+1 , "$") );
    string s = f( str1, str2 );
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