class Solution {
public:
    vector<int> arrayChange(vector<int>& v, vector<vector<int>>& o) {
        unordered_map<int,int> m;
        for(int i=0;i<v.size();i++){
            m[v[i]]=i;
        }
        for(int i=0;i<o.size();i++){
            int p=m[o[i][0]];
            v[p]=o[i][1];
            m[o[i][1]]=p;
        }
        return v;
    }
};