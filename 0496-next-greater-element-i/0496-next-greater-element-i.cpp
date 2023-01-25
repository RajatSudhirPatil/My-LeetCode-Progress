class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        vector<int> c(b.size());
        vector<int> d(a.size());
        stack<int> s;
        int n=b.size();
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                c[i]=-1;
                s.push(b[i]);
            }
            else{
                while(!s.empty() && s.top()<=b[i]) s.pop();
                if(s.empty()){
                    c[i]=-1;
                    s.push(b[i]);
                }
                else{
                    c[i]=s.top();
                    s.push(b[i]);
                }
            }
        }
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({b[i],c[i]});
        }
        vector<pair<int,int>> p;
        for(int i=0;i<a.size();i++){
            for(auto j:v){
                if(j.first==a[i]){
                    p.push_back({a[i],j.second});
                }
            }
        }
        vector<int> ans;
        for(auto i:p){
            ans.push_back(i.second);
        }
        return ans;
    }
};