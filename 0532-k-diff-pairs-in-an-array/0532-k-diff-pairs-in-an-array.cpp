class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        int n=a.size();
        int c=0;
        set<pair<int,int>> s;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(a[i]-a[j])==k){
                    s.insert({min(a[i],a[j]),max(a[i],a[j])});
                }
            }
        }
        return s.size();
    }
};