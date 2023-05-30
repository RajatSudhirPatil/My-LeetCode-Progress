class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        vector<int> op(v.size());
        op[0]=1;
        for(int i=1;i<n;i++){
            op[i]=1;
            for(int j=i-1;j>=0;j--){
                if(v[j]>=v[i]) continue;
                int pa=op[j]+1;
                if(pa>op[i]) op[i]=pa;
            }
        }
        int a=0;
        for(int i=0;i<n;i++){
            if(op[i]>a) a=op[i];
        }
        return a;
    }
};