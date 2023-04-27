class Solution {
public:
    int pivotInteger(int n) {
        int ts=n*(n+1)/2;
        int presm=0;
        for(int i=1;i<=n;i++){
            presm+=i;
            if((ts-presm+i)==presm) return i;
        }
        return -1;
    }
};