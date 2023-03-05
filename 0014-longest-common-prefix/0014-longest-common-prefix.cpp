class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string a;
        string f=s[0],l=s[s.size()-1];
        for(int i=0;i<f.size();i++){
            if(f[i]==l[i]){
                a.push_back(f[i]);
            }
            else return a;
        }
        return a;
    }
};