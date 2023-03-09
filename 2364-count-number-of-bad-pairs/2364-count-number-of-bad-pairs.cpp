class Solution {
public:
    long long countBadPairs(vector<int>& a) {
        long long n=a.size();
        long long res=0;
        long long total=n*(n-1)/2;
        map<int,int> m;
        for(int i=0;i<n;i++){
            a[i]=a[i]-i;
            res+=m[a[i]];
            m[a[i]]++;
        }
        return total-res;
    }
};