class Solution {
public:
    int reverse(int x) {
        long long a,b,ans1,ans2;
        string c,d;
        if(x>0){
            c=to_string(x);
            reverse(c.begin(),c.end());
            ans1=stoll(c);
            if(ans1>INT_MAX) return 0;
            else return ans1;
        }
        else if(x<0){
            b=-1;
            a=-1*x;
            d=to_string(a);
            reverse(d.begin(),d.end());
            ans2=stoll(d);
            ans2=-1*ans2;
            if(ans2<INT_MIN) return 0;
            else return ans2;
        }
        else return 0;
    }
};