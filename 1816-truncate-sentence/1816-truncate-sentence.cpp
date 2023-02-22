class Solution {
public:
    string truncateSentence(string s, int k) {
        int len=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ') len++;
        }
        if(len==k-1) return s;
        int flag=0;
        int i=0;
        while(flag!=k){
            if(s[i]==' ') flag++;
            i++;
        }
        string a=s.substr(0,i-1);
        return a;
    }
};