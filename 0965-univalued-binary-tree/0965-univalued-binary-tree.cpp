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
    void trav(TreeNode* root,set<int> &s){
        if(root==NULL) return;
        trav(root->left,s);
        s.insert(root->val);
        trav(root->right,s);
    }
    bool isUnivalTree(TreeNode* root) {
        set<int> s;
        trav(root,s);
        if(s.size()>1 || s.size()==0) return false;
        return true;
    }
};