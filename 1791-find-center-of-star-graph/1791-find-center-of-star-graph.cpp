class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> m;
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<edges[0].size();j++){
                m[edges[i][j]]++;
            }
        }
        int maxi=INT_MIN;
        int ans;
        for(auto i:m){
            if(i.second>maxi){
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};