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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        vector<vector<double>> l;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<double> a;
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                a.push_back(node->val);
            }
            l.push_back(a);
        }
        for(int i=0;i<l.size();i++){
            double sm=0;
            for(int j=0;j<l[i].size();j++){
                sm+=(l[i][j]);
            }
            double avg=(sm)/(l[i].size()*1.0);
            v.push_back(avg);
        }
        return v;
    }
};