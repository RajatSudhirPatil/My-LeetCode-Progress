class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& v) {
        set<char> s;
        int count=v.size();
        for(auto i:allowed){
            s.insert(i);
        }
        for(int i=0;i<v.size();i++){
            int flag=0;
            for(int j=0;j<v[i].size();j++){
                auto pos=s.find(v[i][j]);
                if(pos==s.end()){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};