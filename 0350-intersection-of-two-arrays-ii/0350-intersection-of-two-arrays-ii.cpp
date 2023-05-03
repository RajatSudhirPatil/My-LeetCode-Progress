#include<vector>
class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        map<int,int> m;
        for(auto i:v1){
            m[i]++;
        }
        vector<int> ans;
        for(auto i:v2){
            if(m[i]>0){
                ans.push_back(i);
                m[i]--;
            }
        }
        return ans;
    }
};