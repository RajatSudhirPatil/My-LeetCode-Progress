class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double> s;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            double avg=(nums[i++]+nums[j--])/2.0;
            s.insert(avg);
             
        }
        return s.size();
    }
};