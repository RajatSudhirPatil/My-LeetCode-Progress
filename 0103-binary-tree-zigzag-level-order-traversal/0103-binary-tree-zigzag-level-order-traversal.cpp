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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> a;
        if(root==NULL) return a;
        queue<TreeNode*> q;
        q.push(root);
        int k=0;
        while(!q.empty()){
            vector<int> t;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode *nn=q.front();
                q.pop();
                if(nn->left) q.push(nn->left);
                if(nn->right) q.push(nn->right);
                t.push_back(nn->val);
            }
            if(k++%2) reverse(t.begin(),t.end());
            a.push_back(t);
        }
        return a;
    }
};