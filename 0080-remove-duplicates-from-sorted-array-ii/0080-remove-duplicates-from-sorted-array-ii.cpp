class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        map<int,int> m;
        for(int i=0;i<v.size();i++){
            if(m[v[i]]<2) m[v[i]]++;
        }
        v.clear();
        for(auto i:m){
            for(int j=0;j<i.second;j++){
                v.push_back(i.first);
            }
        }
        return v.size();
    }
};