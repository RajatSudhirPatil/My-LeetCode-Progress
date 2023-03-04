class Solution {
public:
    int triangularSum(vector<int>& a) {
        while(a.size()!=0){
            int n=a.size();
            for(int i=0;i<n-1;i++){
                a[i]=(a[i]+a[i+1])%10;
            }
            a.erase(a.begin()+n-1);
        }
        return a[0];
    }
};