class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int maxlen=0;
        int c=0;
        for(auto i:v){
            if(i==1){
                c++;
                maxlen=max(c,maxlen);
            }
            else c=0;
        }
        return maxlen;
    }
};