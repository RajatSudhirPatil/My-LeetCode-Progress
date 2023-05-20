class Solution {
public:
    void insrem(char ins,char rem, unordered_map<char,int> &m){
        m[ins]++;
        m[rem]--;
        if(m[rem]==0) m.erase(rem);
    }
    bool isItPossible(string w1, string w2) {
        unordered_map<char,int> m1,m2;
        for(auto i:w1) m1[i]++;
        for(auto i:w2) m2[i]++;
        for(char c1='a';c1<='z';c1++){
            for(char c2='a';c2<='z';c2++){
                if(m1.count(c1)==0 || m2.count(c2)==0) continue;
                insrem(c2,c1,m1);
                insrem(c1,c2,m2);
                if(m1.size()==m2.size()) return true;
                insrem(c1,c2,m1);
                insrem(c2,c1,m2);
            }
        }
        return false;
    }
};