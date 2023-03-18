#include<bits/stdc++.h>
class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        unordered_map<string,int> m;
        for(int i=0;i<p.size();){
            string s="";
            while(i<p.size() && isalpha(p[i])) s.push_back(tolower(p[i++]));
            while(i<p.size() && !isalpha(p[i])) i++;
            m[s]++;
        }
        for(auto i:banned) m[i]=0;
        string res;
        int count=0;
        for(auto i:m){
            if(i.second>count){
                res=i.first;
                count=i.second;
            }
        }
        return res;
    }
};