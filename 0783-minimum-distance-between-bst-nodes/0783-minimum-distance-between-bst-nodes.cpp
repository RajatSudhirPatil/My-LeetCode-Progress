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
    void inor(vector<int> &v,TreeNode* root){
        if(root==NULL) return;
        inor(v,root->left);
        v.push_back(root->val);
        inor(v,root->right);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        inor(v,root);
        sort(v.begin(),v.end());
        int mind=INT_MAX;
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]<mind) mind=v[i]-v[i-1];
        }
        return mind;
    }
};