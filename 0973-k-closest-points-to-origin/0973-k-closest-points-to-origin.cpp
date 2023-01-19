class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        int n=a.size();
        vector<vector<int>> v;
        vector<pair<int,pair<int,int>>> p;
        for(int i=0;i<n;i++){
            pair<int,int> point(a[i][0],a[i][1]);
            p.push_back({(a[i][0]*a[i][0]+a[i][1]*a[i][1]),point});
        }
        sort(p.begin(),p.end());
        for(int i=0;i<k;i++){
            v.push_back({p[i].second.first,p[i].second.second});
        }
        return v;
    }
};