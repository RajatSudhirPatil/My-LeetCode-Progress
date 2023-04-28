class Solution {
public:
    void rotate(vector<int>& v, int k) {
        reverse(v.begin(),v.end());
        for(int i=0;i<k;i++){
            v.push_back(v[i]);
        }
        v.erase(v.begin(),v.begin()+k);
        reverse(v.begin(),v.end());
    }
};