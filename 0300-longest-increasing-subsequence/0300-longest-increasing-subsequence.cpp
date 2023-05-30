class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        vector<int> dp(n);
        dp[0]=1;
        for(int i=1;i<n;i++){
            dp[i]=1;
            for(int j=i-1;j>=0;j--){
                if(v[j]>=v[i]) continue;
                int pa=dp[j]+1;
                if(pa>dp[i]) dp[i]=pa;
            }
        }
        int a=0;
        for(int i=0;i<n;i++){
            if(dp[i]>a) a=dp[i];
        }
        return a;
    }
};