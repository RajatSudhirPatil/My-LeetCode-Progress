class Solution {
public:
    int minPartitions(string n) {
        int maxi=INT_MIN;
        for(auto i:n){
            maxi=max(maxi,i-48);
        }
        return maxi;
    }
};