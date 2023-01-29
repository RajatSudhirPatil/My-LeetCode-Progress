class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        for(auto i:nums){
            if(i==0) c0++;
            if(i==1) c1++;
            if(i==2) c2++;
        }
        nums.clear();
        for(int i=0;i<c0;i++) nums.push_back(0);
        for(int i=0;i<c1;i++) nums.push_back(1);
        for(int i=0;i<c2;i++) nums.push_back(2);
    }
};