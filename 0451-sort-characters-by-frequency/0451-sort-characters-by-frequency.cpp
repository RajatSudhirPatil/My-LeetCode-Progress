class Solution {
public:
    string frequencySort(string s) {
        string a;
        map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        vector<pair<int,char>> p;
        for(auto i:m){
            p.push_back({i.second,i.first});
        }
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        for(auto i:p){
            for(int j=0;j<i.first;j++)
            a.push_back(i.second);
        }
        return a;
    }
};