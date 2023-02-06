class Solution {
public:
    int majorityElement(vector<int>& a) {
        map<int,int> m;
        for(int i:a){
            m[i]++;
        }
        int ans;
        for(auto i:m){
            if(i.second>a.size()/2)
                ans=i.first;
        }
        return ans;
    }
};