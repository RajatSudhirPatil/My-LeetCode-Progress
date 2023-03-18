class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        int sum=0;
        for(auto i:m){
            if(i.second==1) sum+=i.first;
        }
        return sum;
    }
};