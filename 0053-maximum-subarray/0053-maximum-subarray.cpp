class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxm=INT_MIN;
        for(auto i:nums){
            sum+=i;
            maxm=max(sum,maxm);
            if(sum<0) sum=0;
        }
        return maxm;
    }
};