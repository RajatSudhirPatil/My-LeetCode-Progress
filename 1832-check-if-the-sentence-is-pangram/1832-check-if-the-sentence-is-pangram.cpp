class Solution {
public:
    bool checkIfPangram(string sen) {
        set<char> s;
        for(auto i:sen){
            s.insert(i);
        }
        if(s.size()==26) return true;
        return false;
    }
};