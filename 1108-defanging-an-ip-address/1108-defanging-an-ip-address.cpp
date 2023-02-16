class Solution {
public:
    string defangIPaddr(string address) {
        string a;
        for(auto i:address){
            if(i=='.'){
                a.push_back('[');
                a.push_back('.');
                a.push_back(']');
            }
            else a.push_back(i);
        }
        return a;
    }
};