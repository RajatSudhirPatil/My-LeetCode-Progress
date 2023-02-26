class Solution {
public:
    vector<int> addToArrayForm(vector<int>& v, int k) {
        for(int i=v.size()-1;i>=0&&k>0;i--){
            v[i]+=k;
            k=v[i]/10;
            v[i]%=10;
        }
        while(k>0){
            v.insert(v.begin(),k%10);
            k/=10;
        }
        return v;
    }
};