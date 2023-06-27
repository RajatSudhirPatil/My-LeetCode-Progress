class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& v1, vector<int>& v2, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>> q;
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v2.size();j++){
                int sum=v1[i]+v2[j];
                if(q.size()<k){
                    q.push({sum,{v1[i],v2[j]}});
                }
                else if(sum<q.top().first){
                    q.pop();
                    q.push({sum,{v1[i],v2[j]}});
                }
                else if(sum>q.top().first){
                    break;
                }
            }
        }
        while(!q.empty()){
            ans.push_back({q.top().second.first,q.top().second.second});
            q.pop();
        }
        return ans;
    }
};