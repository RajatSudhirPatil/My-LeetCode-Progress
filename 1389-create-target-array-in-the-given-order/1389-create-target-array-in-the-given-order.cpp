class Solution {
public:
    vector<int> createTargetArray(vector<int>& n, vector<int>& ind) {
        vector<int> a;
        for(int i=0;i<ind.size();i++){
            a.insert(a.begin()+ind[i],n[i]);
        }
        return a;
    }
};