class Solution {
public:
    int percentageLetter(string s, char l) {
        map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        int a=0;
        if(m.find(l)!=m.end()){
            a=m[l];
        }
        return a*100/s.size();
    }
};