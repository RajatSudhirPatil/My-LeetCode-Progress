class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int i=0;
        int j=v.size()-1;
        int f=-1,s=-1;
        while(i<v.size() && j>=0){
            if(v[i]==target){
                s=i;
            }
            if(v[j]==target){
                f=j;
            }
            i++;j--;
        }
        return {f,s};
    }
};