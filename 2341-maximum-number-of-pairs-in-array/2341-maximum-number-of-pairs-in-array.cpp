class Solution {
public:
    vector<int> numberOfPairs(vector<int>& a) {
        map<int,int> m;
        for(auto i:a){
            m[i]++;
        }
        int count=0;
        int rescnt=0;
        for(auto i:m){
            if(i.second%2==0) count+=i.second/2;
            else{
                count+=(i.second-1)/2;
                rescnt++;
            }
        }
        return {count,rescnt};
    }
};