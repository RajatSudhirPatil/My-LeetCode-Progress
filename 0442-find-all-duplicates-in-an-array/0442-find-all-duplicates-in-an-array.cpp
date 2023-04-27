class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        vector<int> a;
        map<int,int> m;
        for(int i=0;i<v.size();i++){
            m[v[i]]++;
        }
        for(auto i:m){
            if(i.second>1) a.push_back(i.first);
        }
        return a;
    }
};