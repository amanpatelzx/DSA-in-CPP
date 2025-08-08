/** leetcode 543
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int levels(TreeNode* root,int &maxDia){
        if(root==NULL) return 0;
        int x=levels(root->left,maxDia);
        int y=levels(root->right,maxDia);
        maxDia=max(maxDia,x+y);
        return 1+max(x,y);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia=0;
        levels(root,maxDia);
        return maxDia;
    }
};             