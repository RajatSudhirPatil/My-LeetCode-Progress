class Solution {
public:
    string reverseWords(string s) {
        //reverse(s.begin(),s.end());
        vector<string> v;
        int i=0;
        for(int i=0;i<s.size();){
            string a="";
            while(i<s.size() && isalnum(s[i])) a+=s[i++];
            while(i<s.size() && !isalnum(s[i])) i++;
            a+=" ";
            v.push_back(a);
        }
        string a="";
        reverse(v.begin(),v.end());
        for(auto i:v){
            a+=i;
        }
        a.pop_back();
        if(a[0]==' ') a.erase(a.begin()+0);
        if(a[a.size()-1]==' ') a.erase(a.begin()+a.size()-1);
        return a;
    }
};