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
    void trav(vector<int> &v, TreeNode* root){
        if(!root) return;
        trav(v,root->left);
        v.push_back(root->val);
        trav(v,root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> v,a;
        trav(v,root);
        map<int,int> m;
        for(auto i:v){
            m[i]++;
        }
        int mini=INT_MIN;
        for(auto i:m){
            if(i.second>mini) mini=i.second;
        }
        for(auto i:m){
            if(i.second==mini) a.push_back(i.first);
        }
        return a;
    }
};