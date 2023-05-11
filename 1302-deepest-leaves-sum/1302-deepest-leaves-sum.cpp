/**
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
    int max_depth;
    int deepestLeavesSum(TreeNode* root) {
        max_depth=depth(root);
        return sm(root,0);
    }
    int depth(TreeNode* root){
        if(!root) return 0;
        return max(1+depth(root->left),1+depth(root->right));
    }
    int sm(TreeNode* root,int depth){
        if(!root) return 0;
        if(depth==max_depth-1) return root->val;
        return sm(root->left,depth+1)+sm(root->right,depth+1);
    }
};