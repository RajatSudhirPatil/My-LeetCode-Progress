class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<pair<string,string>> v;
        for(int i=0;i<s.size();i++){
            string a=s[i];
            sort(a.begin(),a.end());
            v.push_back({a,s[i]});
        }
        sort(v.begin(),v.end());
        vector<vector<string>> ans(s.size());
        int j=0;
        string a=v[0].first;
        for(int i=0;i<v.size();i++){
            if(v[i].first==a){
                ans[j].push_back(v[i].second);
            }
            else{
                j++;
                a=v[i].first;
                ans[j].push_back(v[i].second);
            }
        }
        vector<vector<string>> ansfin;
        for(int i=0;i<ans.size();i++){
            if(!empty(ans[i])){
                ansfin.push_back(ans[i]);
            }
        }
        ans.clear();
        return ansfin;
    }
};