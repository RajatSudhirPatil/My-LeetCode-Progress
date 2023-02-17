class Solution {
public:
    int xorOperation(int n, int a) {
        vector<int> v;
        int xoro=0;
        for(int i=0;i<n;i++){
            v.push_back(a+2*i);
            xoro^=v[i];
        }
        return xoro;
    }
};