class Solution {
public:
    int countPairs(vector<int>& a, int k) {
        int n=a.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j] && (i*j)%k==0) count++;
            }
        }
        return count;
    }
};