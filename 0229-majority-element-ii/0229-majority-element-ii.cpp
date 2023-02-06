class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        unordered_map<int,int> m;
        for(auto i:a){
            m[i]++;
        }
        vector<int> v;
        for(auto i:m){
            if(i.second>a.size()/3){
                v.push_back(i.first);
            }
        }
        return v;
    }
};