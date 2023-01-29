class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxx=max(sum,maxx);
            if(sum<0) sum=0;
        }
        return maxx;
    }
};