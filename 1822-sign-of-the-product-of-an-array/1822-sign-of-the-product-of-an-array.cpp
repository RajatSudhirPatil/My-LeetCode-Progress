class Solution {
public:
    int arraySign(vector<int>& v) {
        int prod=1;
        for(auto i:v){
            if(i<0) i=-1;
            if(i>0) i=1;
            prod*=i;
        }
        if(prod<0) return -1;
        else if(prod>0) return 1;
        return 0;
    }
};