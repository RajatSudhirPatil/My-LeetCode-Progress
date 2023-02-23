class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string alp = "abcdefghijklmnopqrstuvwxyz";
        vector<pair<char,string>> p;
        for(int i=0;i<alp.size();i++){
            p.push_back({alp[i],v[i]});
        }
        set<string> s;
        for(int i=0;i<words.size();i++){
            string h;
            for(int j=0;j<words[i].size();j++){
                for(auto k:p){
                    if(k.first==words[i][j]){
                        for(int z=0;z<k.second.size();z++){
                            h.push_back(k.second[z]);
                        }
                    }
                }
            }
            s.insert(h);
        }
        return s.size();
    }
};