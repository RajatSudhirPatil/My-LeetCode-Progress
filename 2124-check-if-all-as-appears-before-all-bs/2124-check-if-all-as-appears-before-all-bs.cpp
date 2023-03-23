class Solution {
public:
    bool checkString(string s) {
        set<char> a;
        for(auto i:s){
            if(a.empty() || i=='b') a.insert(i);
            if(i=='a' && a.find('b')!=a.end()) return false;
            else(a.insert(i));
        }
        return true;
    }
};