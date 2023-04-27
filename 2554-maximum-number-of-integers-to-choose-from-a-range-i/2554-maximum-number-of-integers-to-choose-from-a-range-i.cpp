class Solution {
public:
    int maxCount(vector<int>& b, int n, int mx) {
        set<int> s;
        for(auto i:b){
            s.insert(i);
        }
        int count=0;
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end() && mx-i>=0){
                mx-=i;
                count++;
            }
        }
        return count;
    }
};