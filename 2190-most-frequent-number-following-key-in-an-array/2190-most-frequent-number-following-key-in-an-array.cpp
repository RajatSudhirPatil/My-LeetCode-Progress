class Solution {
public:
    int mostFrequent(vector<int>& n, int key) {
        vector<pair<int,int>> v;
        for(int i=0;i<n.size();i++){
            if(n[i]==key && i+1<n.size()){
                v.push_back({n[i],n[i+1]});
            }
        }
        map<pair<int,int>,int> m;
        for(auto i:v){
            m[i]++;
        }
        int count=0;
        int ans;
        for(auto i:m){
            cout<<i.first.first<<" "<<i.first.second<<"   "<<i.second<<endl;
            if(i.second>count){
                count=i.second;
                ans=i.first.second;
            }
        }
        return ans;
    }
};