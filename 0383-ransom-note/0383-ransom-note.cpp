class Solution {
public:
    bool canConstruct(string r, string m) {
        map<char,int> a;
        map<char,int> b;
        for(auto i:r){
            a[i]++;
        }
        for(auto i:m){
            b[i]++;
        }
        for(auto i:a){
            if(b[i.first]<i.second) return false;
            if(b.find(i.first)==b.end()) return false;  
        }
        return true;
    }
};