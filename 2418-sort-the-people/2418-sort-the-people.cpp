class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<pair<int,int>> q;
        for(int i=0;i<heights.size();i++){
            q.push({heights[i],i});
        }
        vector<string> v;
        while(!q.empty()){
            int ind=q.top().second;
            q.pop();
            v.push_back(names[ind]);
        }
        return v;
    }
};