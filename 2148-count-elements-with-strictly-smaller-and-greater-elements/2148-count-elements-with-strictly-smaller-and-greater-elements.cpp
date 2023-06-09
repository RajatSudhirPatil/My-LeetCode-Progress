class Solution {
public:
    int countElements(vector<int>& v) {
        int c=0;
        sort(v.begin(),v.end());
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[0]&&v[i]<v[v.size()-1]) c++;
        }
        return c;
    }
};