class Solution {
public:
    bool judgeCircle(string s) {
        int u=0,d=0,l=0,r=0;
        for(auto i:s){
            if(i=='U') u++;
            if(i=='D') d++;
            if(i=='L') l++;
            if(i=='R') r++;
        }
        if(u==d && l==r) return true;
        return false;
    }
};