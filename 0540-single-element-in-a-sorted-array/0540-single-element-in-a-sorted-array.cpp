class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int l=0,r=v.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(mid%2==1) mid--;
            if(v[mid]!=v[mid+1]) r=mid;
            else l=mid+2;
        }
        return v[l];
    }
};