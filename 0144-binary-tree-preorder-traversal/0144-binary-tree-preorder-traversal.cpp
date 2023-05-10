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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*> s;
        if(root==NULL) return v;
        s.push(root);
        while(!s.empty()){
            root=s.top();
            s.pop();
            v.push_back(root->val);
            if(root->right) s.push(root->right);
            if(root->left) s.push(root->left);
        }
        return v;
    }
};