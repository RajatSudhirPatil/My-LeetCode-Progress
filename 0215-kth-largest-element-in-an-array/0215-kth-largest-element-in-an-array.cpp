#include<bits/stdc++.h>
class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
       sort(v.begin(),v.end());
        return v[v.size()-k];
    }
};