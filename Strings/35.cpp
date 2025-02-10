// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return ""; // Edge case: empty input

//         // Assume the first string as the initial prefix
//         string prefix = strs[0];
        
//         for (int i = 1; i < strs.size(); i++) {
//             // Compare the current prefix with each string
//             while (strs[i].find(prefix) != 0) {
//                 // Shorten the prefix
//                 prefix = prefix.substr(0, prefix.size() - 1);
//                 if (prefix.empty()) return ""; // No common prefix
//             }
//         }
        
//         return prefix;
//     }
// }
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    vector<string>v1;
    vector<string>v2;
   for(int i=0;i<strs.size();i++){
   string s=strs[i];
   for(int j=0;j<s.size();j++){//here t(1,s[j]) means 1 represent how much type char s[j] should repeat
        string t(1,s[j]);
        v1.push_back(t);
        if(i==0) v2.push_back(t);
    }
        v1.push_back(" ");
   }

  int a=0,d=0,m=0;;
   for(int k=0;k<v2.size();k++){
   for(int i=v2.size();i<v1.size()-1;i++){
    if(v1[i]!=" ") continue;
    else if(v2[k]!=v1[i+1+k]){
        d++;
    break;
    }
    else a++;
   }
   if(d==1) break;
   if(a==strs.size()-1) m++;
   a=0;
   }
   if(m>0){
  vector<char> l(m);
   for(int i=0;i<m;i++){
    l[i]=v2[i];
   }
   return l;
   }
   else return<<"";
 
    }
};