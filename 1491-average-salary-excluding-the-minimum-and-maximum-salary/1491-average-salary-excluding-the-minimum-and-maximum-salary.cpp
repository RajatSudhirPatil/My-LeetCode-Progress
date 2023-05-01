class Solution {
public:
    double average(vector<int>& v) {
        sort(v.begin(),v.end());
        double s=0;
        int c=0;
        for(int i=1;i<v.size()-1;i++){
            s+=v[i];
            c++;
        }
        return (s/c);
    }
};