class Solution {
public:
    string interpret(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='G') a.push_back('G');
            if(s[i]=='(' && s[i+1]==')') a.push_back('o');
            if(s[i]=='(' && s[i+1]=='a' && s[i+2]=='l' && s[i+3]==')'){
                a.push_back('a');
                a.push_back('l');
            }
        }
        return a;
    }
};