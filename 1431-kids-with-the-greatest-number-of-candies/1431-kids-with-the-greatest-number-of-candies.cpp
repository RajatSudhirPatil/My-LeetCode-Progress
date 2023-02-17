class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int maxi=INT_MIN;
        for(auto i:candies){
            if(i>maxi) maxi=i;
        }
        for(int i=0;i<candies.size();i++){
            if(extraCandies+candies[i]>=maxi){
                v.push_back(true);
            }
            else v.push_back(false);
        }
        return v;
    }
};