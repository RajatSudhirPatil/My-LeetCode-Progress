class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n1, vector<int>& n2) {
        vector<vector<int>> ans(2);
        set<int> s1,s2;
        for(auto i:n1){
            s1.insert(i);
        }
        for(auto i:n2){
            s2.insert(i);
        }
        for(auto i:s1){
            if(s2.find(i)==s2.end()) ans[0].push_back(i);
        }
        for(auto i:s2){
            if(s1.find(i)==s1.end()) ans[1].push_back(i);
        }
        return ans;
    }
};