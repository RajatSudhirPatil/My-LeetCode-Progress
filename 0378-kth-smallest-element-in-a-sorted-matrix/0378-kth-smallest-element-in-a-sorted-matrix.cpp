class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {
        vector<int> a;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                a.push_back(v[i][j]);
            }
        }
        sort(a.begin(),a.end());
        return a[k-1];
    }
};