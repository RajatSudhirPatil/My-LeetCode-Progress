class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& a) {
        vector<int> b;
        for(int i=0;i<a.size();i++){
            int count=0;
            for(int j=0;j<a.size();j++){
                if(a[j]<a[i]) count++;
            }
            b.push_back(count);
        }
        return b;
    }
};