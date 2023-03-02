class Solution {
public:
    int arithmeticTriplets(vector<int>& a, int diff) {
        sort(a.begin(),a.end());
        int count=0;
        int n=a.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(a[j]-a[i]==diff && a[k]-a[j]==diff) count++;
                }
            }
        }
        return count;
    }
};