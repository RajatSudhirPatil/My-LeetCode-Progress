class Solution {
public:
    int countKDifference(vector<int>& a, int k) {
        int count=0;
        for(int i=0;i<a.size()-1;i++){
            for(int j=i+1;j<a.size();j++){
                if(abs(a[i]-a[j])==k) count++;
            }
        }
        return count;
    }
};