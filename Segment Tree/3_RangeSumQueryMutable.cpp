//https://leetcode.com/problems/range-sum-query-mutable/
class NumArray {
public:
    vector<int> st;
    int n;
    NumArray(vector<int>& nums) {
        n = nums.size();
        st.resize(4*n);
        createSegmentTree(0 , 0 , n - 1 , nums);
    }
    void createSegmentTree(int i , int low , int high , vector<int> &nums){
        if(low == high){
            st[i] = nums[high];
            return;
        }
        int mid = low + (high - low) / 2;
        createSegmentTree( i*2 + 1 , low , mid , nums);
        createSegmentTree( i*2 + 2 , mid + 1 , high , nums);
        st[i] = st[i*2+1] + st[i*2+2];
    }
    void updateSegmentTree(int i , int low , int high , int idx , int val){
        if(low == high){
            st[i] = val;
            return;
        }
        int mid = low + (high - low) / 2;
        if(idx <= mid) updateSegmentTree(i*2+1 , low , mid , idx , val);
        else updateSegmentTree(i*2+2 , mid+1 , high , idx ,val);
        st[i] = st[i*2+1] + st[i*2+2];
    }
    
    void update(int index, int val) {
        updateSegmentTree(0 , 0 , n - 1, index , val);
    }
    int getSum(int i , int low , int high, int &left , int &right){
        if(low > right || high < left) return 0;
        if(low >= left && high <= right) return st[i];
        int mid = low + (high - low)/2;
        int leftSum = getSum(i*2+1 , low , mid , left , right);
        int rightSum = getSum(i*2+2 , mid+1 , high , left , right);
        return leftSum + rightSum;
    }
    int sumRange(int left, int right) {
        return getSum(0 , 0 , n-1 , left ,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */