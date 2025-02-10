sort(v.begin(),v.end());
   int n=v.size();
   string first=v[0];
   string last =v[n-1];

    string ans="";
   for(int i=0;i<first.size();i++){
    if(first[i]==last[i]) ans+=first[i] ;
    else break;
   }