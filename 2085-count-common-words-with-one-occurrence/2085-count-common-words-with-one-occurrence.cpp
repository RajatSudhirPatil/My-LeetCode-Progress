class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        map<string,int> m1;
        map<string,int> m2;
        int count=0;
        for(auto i:w1){
            m1[i]++;
        }
        for(auto i:w2){
            m2[i]++;
        }
        for(auto i:m1){
            if(i.second==1 && m2.find(i.first)!=m2.end() && m2[i.first]==1){
                count++;
            }
        }
        return count;
    }
};