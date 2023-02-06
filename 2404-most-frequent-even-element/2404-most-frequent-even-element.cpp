class Solution {
public:
    int mostFrequentEven(vector<int>& a) {
        map<int,int> m;
        for(auto i:a){
            if(i%2==0) m[i]++;
        }
        int max=-11111,ans;
        for(auto i:m){
            if(i.second>max){
                max=i.second;
                ans=i.first;
            }
        }
        if(m.empty()) return -1;
        return ans;
    }
};