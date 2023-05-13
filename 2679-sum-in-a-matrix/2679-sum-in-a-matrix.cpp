class Solution {
public:
    int matrixSum(vector<vector<int>>& v) {
        int score=0;
        for(int i=0;i<v.size();i++){
            sort(v[i].begin(),v[i].end());
            reverse(v[i].begin(),v[i].end());
        }
        for(int j=0;j<v[0].size();j++){
            int mx=0;
            for(int i=0;i<v.size();i++){
                mx=max(mx,v[i][j]);
                v[i][j]=0;
            }
            score+=mx;
        }
        return score;
    }
};