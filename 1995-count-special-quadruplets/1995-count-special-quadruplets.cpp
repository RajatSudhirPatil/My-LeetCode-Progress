class Solution {
public:
    int countQuadruplets(vector<int>& a) {
        //sort(a.begin(),a.end());
        int n=a.size();
        int count=0;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                for(int k=j+1;k<n-1;k++){
                    for(int l=k+1;l<n;l++){
                        if(a[i]+a[j]+a[k]==a[l]) count++;
                    }
                }
            }
        }
        return count;
    }
};