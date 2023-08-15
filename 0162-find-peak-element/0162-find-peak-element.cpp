class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int max=v[0];
        int idx=0;
        if(v.size()==1) return 0;
        if(v.size()==2){
            if(v[0]>v[1]) return 0;
            return 1;
        }
        if(v[0]>v[1]){
            max=v[0]; 
            idx=0;
        }
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1]&&v[i]>v[i+1]){
                if(v[i]>=max) max=v[i];
                idx=i;
            }
        }
        if(v[v.size()-1]>v[v.size()-2]){
            max=v[v.size()-1];
            idx=v.size()-1;
        }
        return idx;
    }
};