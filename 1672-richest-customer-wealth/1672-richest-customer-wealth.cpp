class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int mx=INT_MIN;
        int sum=0;
        int m=accounts[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+=accounts[i][j];
            }
            if(sum>mx){
                mx=sum;
               
            }
             sum=0;
        }
        return mx;
    }
};