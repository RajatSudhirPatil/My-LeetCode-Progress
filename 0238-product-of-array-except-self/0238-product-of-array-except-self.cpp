class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int prod=1;
        vector<int> v1;
        map<int,int> m;
        for(auto i:v){
            m[i]++;
        }
        cout<<m[0]<<" ";
        if(m[0]>1){
            for(int i=0;i<v.size();i++) v1.push_back(0);
        }
        if(m[0]<=1){
            if(m[0]==1){
                for(auto i:v){
                    if(i!=0){
                        prod*=i;
                    }
                }
                for(int i=0;i<v.size();i++){
                    if(v[i]!=0) v1.push_back(0);
                    else v1.push_back(prod);
                }
            }
            else if(m[0]==0){
                for(auto i:v){
                    prod*=i;
                }
                for(int i=0;i<v.size();i++){
                    v1.push_back(prod/v[i]);
                }
            }
        }
        return v1;
    }
};