class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        auto j=m.begin();
        int a;
        for(auto i:m){
            a=i.second;
            break;
        }
        for(auto i:m){
            if(i.second!=a) return false;
        }
        return true;
    }
};