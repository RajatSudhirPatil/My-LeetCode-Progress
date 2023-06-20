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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>> a;
        vector<int> v;
        if(!root) return v;
        q.push(root);
        while(!q.empty()){
            vector<int> l;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode *nn=q.front();
                q.pop();
                if(nn->left) q.push(nn->left);
                if(nn->right) q.push(nn->right);
                l.push_back(nn->val);
            }
            a.push_back(l);
        }
        
        for(int i=0;i<a.size();i++){
            v.push_back(a[i][a[i].size()-1]);
        }
        return v;
    }
};