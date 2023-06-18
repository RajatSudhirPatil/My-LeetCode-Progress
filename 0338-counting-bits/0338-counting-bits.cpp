class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n);
        v.push_back(0);
        if(n==0) return v;
        
        for(int i=1;i<=n;i++){
            if(i%2==0) v[i]=v[i/2];
            else v[i]=v[i-1]+1;
        }
        return v;
    }
};