class Solution {
public:
    bool squareIsWhite(string c) {
        int n1=c[0]-96;
        int n2=c[1]-48;
        if((n1+n2)%2==0) return false;
        return true;
    }
};