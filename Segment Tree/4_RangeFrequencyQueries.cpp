class RangeFreqQuery {
public:
    vector<unordered_map<int,int>> st;
    int n;
    RangeFreqQuery(vector<int>& arr) {
        n = arr.size();
        st.resize(4*n);
        createSegmentTree( 0, 0 , n-1 , arr);
    }
    void createSegmentTree(int i, int low , int high , vector<int> &arr){
        if(low == high){
            st[i][arr[low]] = 1;
            return;
        }
        int mid = low + (high - low)/2;
        createSegmentTree(2*i + 1  , low , mid , arr);
        createSegmentTree(2*i + 2  , mid+1 , high ,arr);
         // here i m adding the map
        unordered_map<int, int> m1 = st[2*i+1];
        for(pair<int,int> p : st[2*i+2]){
            if(m1.find(p.first) == m1.end()) m1.insert(p);
            else m1[p.first] += p.second;
        }
        st[i] = m1;
    }
    int getFrequency(int i, int low, int high , int &left , int &right , int &value){
        if(low > right || high < left) return 0;
        if( low >=left && high <=right){
            if(st[i].find(value) == st[i].end()) return 0;
             return st[i][value];
        }

        int mid = low + ( high - low )/2;
        int leftAns = getFrequency(2*i+1, low , mid, left , right , value);
        int rightAns = getFrequency(2*i+2, mid+1 , high, left , right , value);
        return leftAns + rightAns;
    }
    
    int query(int left, int right, int value) {
        return getFrequency(0 , 0 , n-1 , left , right , value);
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */