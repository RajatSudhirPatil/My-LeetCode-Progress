class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> m;
        for(int i=0;i<s1.size();){
            string s="";
            while(i<s1.size() && isalpha(s1[i])) s.push_back(s1[i++]);
            while(i<s1.size() && !isalpha(s1[i])) i++;
            m[s]++;
        }
        for(int i=0;i<s2.size();){
            string s="";
            while(i<s2.size() && isalpha(s2[i])) s.push_back(s2[i++]);
            while(i<s2.size() && !isalpha(s2[i])) i++;
            m[s]++;
        }
        vector<string> v;
        for(auto i:m){
            if(i.second==1) v.push_back(i.first);
        }
        return v;
    }
};