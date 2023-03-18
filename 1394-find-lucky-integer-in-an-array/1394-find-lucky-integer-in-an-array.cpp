class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> m;
        sort(arr.begin(),arr.end());
        for(auto i:arr){
            m[i]++;
        }
        int res=-1;
        for(auto i:m){
            if(i.first==i.second) res=i.first;
        }
        return res;
    }
};