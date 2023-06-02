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
    void inor(set<int> &s,TreeNode* root){
        if(root==NULL) return;
        inor(s,root->left);
        s.insert(root->val);
        inor(s,root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> s;
        inor(s,root);
        s.erase(s.begin());
        if(s.empty()) return -1;
        auto it=s.begin();
        return *it;
    }
};