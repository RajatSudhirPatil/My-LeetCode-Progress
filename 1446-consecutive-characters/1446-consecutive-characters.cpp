class Solution {
public:
    int maxPower(string s) {
        int mxln=0;
        int len=0;
        char a=s[0];
        for(int i=1;i<s.size();i++){
            if(a!=s[i]){
                mxln=max(mxln,len);
                a=s[i];
                len=0;
            }
            else{
                len++;
                mxln=max(len,mxln);
            }
        }
        return mxln+1;
    }
};