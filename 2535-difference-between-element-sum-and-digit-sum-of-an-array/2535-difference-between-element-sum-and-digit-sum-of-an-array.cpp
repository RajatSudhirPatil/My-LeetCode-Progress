class Solution {
public:
    int differenceOfSum(vector<int>& v) {
        int elesum=accumulate(v.begin(),v.end(),0);
        int sum=0;
        for(int i=0;i<v.size();i++){
            int n=v[i];
            while(n){
                sum+=n%10;
                n=n/10;
            }
        }
        return abs(sum-elesum);
    }
};