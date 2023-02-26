#include<bits/stdc++.h>
class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n=v.size()-1;
        for(int i=n;i>=0;i--){
            if(v[i]==9){
                v[i]=0;
            }
            else{
                v[i]+=1;
                return v;
            }
        }
        v.push_back(0);
        v[0]=1;
        return v;
    }
};