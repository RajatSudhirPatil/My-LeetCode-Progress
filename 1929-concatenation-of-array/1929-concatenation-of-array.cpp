#include<bits/stdc++.h>
class Solution {
public:
    vector<int> getConcatenation(vector<int>& a) {
        
        int n=a.size();
        for(int i=0;i<n;i++){
            a.push_back(a[i]);
        }
        return a;
    }
};