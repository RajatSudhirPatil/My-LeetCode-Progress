class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(auto i:v){
            m[i]++;
        }
        priority_queue<pair<int,int>> q;
        for(auto i:m){
            q.push({i.second,i.first});
        }
        while(k--){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};