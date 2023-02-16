class Solution {
public:
    int numJewelsInStones(string j, string s) {
        map<char,int> mp;
        for(auto i:s){
            mp[i]++;
        }
        int count=0;
        for(int i=0;i<j.size();i++){
            for(auto k:mp){
                if(j[i]==k.first){
                    count+=k.second;
                }
            }
        }
        return count;
    }
};