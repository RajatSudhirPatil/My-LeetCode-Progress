class Solution {
public:
    string sortSentence(string s) {
        int len=1;
        for(auto i:s){
            if(!isalnum(i)) len++;
        }
        vector<string> v(len);
        for(int i=0;i<s.size();){
            string s1="";
            while(i<s.size() && isalpha(s[i])) s1.push_back(s[i++]);
            while(i<s.size() && isdigit(s[i])) v[s[i++]-'1']=s1;
            while(i<s.size() && !isalnum(s[i])) i++;
        }
        string s2;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                s2.push_back(v[i][j]);
            }
            s2.push_back(' ');
        }
        if(s2.size()!=0) s2.pop_back();
        return s2;
    }
};