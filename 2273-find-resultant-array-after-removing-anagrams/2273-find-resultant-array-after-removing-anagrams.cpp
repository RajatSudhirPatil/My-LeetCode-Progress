#include<vector>
#include<bits/stdc++.h>
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& s) {
        int i=1;
        while(i<s.size()){
            string a=s[i-1];
            string b=s[i];
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            if(a==b){
                s.erase(s.begin()+i);
            }
            else i++;
        }
        return s;
    }
};