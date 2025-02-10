#include<iostream>
using namespace std;//leetcode 633
bool judgeSquareSum(int c) {
        int lo=1;
        int hi=c;
        int idx;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(mid*mid==c or (mid+1)*(mid+1)==c) return true;
            else if(mid*mid<=c and (mid+1)*(mid+1)>=c) {
                idx=mid;
                break;
            }
            else if(mid*mid>c) hi=mid-1;
            else if(mid*mid<c) lo=mid+1;
        }
        cout<<idx<<endl;
            for(int i=0;i<idx;i++){
            int low=0;
            int high=idx-i;
            int rest=c-(high)*(high);
            while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==rest) return true;
            else if(mid*mid<rest) low=mid+1;
            else if(mid*mid>rest) high=mid-1;
        }
        }
        return false;
    }
int main(){
    int c=0;
    cout<<judgeSquareSum(c);
    }
