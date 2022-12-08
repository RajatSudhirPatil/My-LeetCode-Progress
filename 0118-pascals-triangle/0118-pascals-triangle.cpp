class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> a(n);
        for(int i=0;i<n;i++){
            a[i].resize(i+1);
            a[i][0]=a[i][i]=1;
            for(int j=1;j<i;j++){
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        
        }
        return a;
            
    }
};