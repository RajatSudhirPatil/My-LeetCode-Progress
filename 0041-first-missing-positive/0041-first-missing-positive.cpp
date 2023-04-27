class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
        vector<int> a;
        int n=v.size();
        int c0=0;
        set<int> s;
        for(int i=0;i<v.size();i++){
            if(v[i]>0){ 
                s.insert(v[i]);
            }
            else{
                c0++;
            }
        }
        for(auto i:s){
            a.push_back(i);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<c0;i++){
            a.push_back(-1);
        }
        int ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=i+1){
                ans=i+1;
                break;
            } 
            else ans=i+2;
        }
        return ans;
    }
};