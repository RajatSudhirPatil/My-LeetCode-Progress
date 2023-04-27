class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        double m=0;
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        sort(v1.begin(),v1.end());
        if(v1.size()%2!=0) return v1[v1.size()/2]/1.0;
        else{
            m=(v1[v1.size()/2 - 1]+v1[v1.size()/2])/(2.0);
        }
        return m;
    }
};