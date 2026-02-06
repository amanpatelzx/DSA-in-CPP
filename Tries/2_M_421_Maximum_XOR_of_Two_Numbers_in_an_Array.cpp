class Node{
    public:
    Node* left;
    Node* right;
    Node(){
        this->left = this->right = NULL;
    }
};
class Solution {
public:
    Node* currHead;
    int maximum_XOR(int val){
        Node* curr = currHead;
        int ans = 0;
        for(int i = 31; i >= 0; i--){
            int bit = ((val>>i) & 1);
            if(bit == 1){
                if(curr->left != NULL){
                    ans += (1<<i);
                    curr = curr->left;
                }
                else curr = curr->right;
            }
            else{
                if(curr->right != NULL){
                    ans += (1<<i);
                    curr = curr->right;
                }
                else curr = curr->left;
            }
        }
        return ans;
    }
    void add_no(int val){
        Node* curr = currHead;
        for(int i = 31; i >= 0; i--){
            int bit = ((val>>i) & 1);
            if(bit == 1){
                if(curr->right == NULL){
                    Node* temp = new Node();
                    curr->right = temp;
                }
                curr = curr->right;
            }
            else{
                if(curr->left == NULL){
                    Node* temp = new Node();
                    curr->left = temp;
                }
                curr = curr->left;
            }
        }
    }
    int findMaximumXOR(vector<int>& nums) {
        currHead = new Node();
        int result = 0;
        add_no(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            result = max(result , maximum_XOR(nums[i]));
            add_no(nums[i]);
        }
        return result;
    }
};