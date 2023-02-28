class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> st;
        for(auto i:s){
            if(st.find(i)!=st.end()) return i;
            else st.insert(i);
        }
        return 'a';
    }
};