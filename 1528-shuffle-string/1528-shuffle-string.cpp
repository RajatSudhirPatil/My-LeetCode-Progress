class Solution {
public:
    string restoreString(string s, vector<int>& a) {
        string res=s;
        for(int i=0;i<a.size();i++){
            res[a[i]]=s[i];
        }
        return res;
    }
};