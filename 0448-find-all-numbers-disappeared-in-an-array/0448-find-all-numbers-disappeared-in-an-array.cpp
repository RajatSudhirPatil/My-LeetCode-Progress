class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        int n=v.size();
        set<int> s;
        vector<int> a;
        for(int i=0;i<n;i++){
            s.insert(v[i]);
        }
        for(int i=1;i<=n;i++){
            if(s.find(i)!=s.end()) a.push_back(i);
            else a.push_back(-1);
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(a[i]==-1) ans.push_back(i+1);
        }
        return ans;
    }
};