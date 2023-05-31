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
    void trav(vector<int> &v,TreeNode* root){
        if(root==NULL) return;
        trav(v,root->left);
        v.push_back(root->val);
        trav(v,root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        trav(v,root);
        sort(v.begin(),v.end());
        int d=INT_MAX;
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]<d) d=v[i]-v[i-1];
        }
        return d;
    }
};