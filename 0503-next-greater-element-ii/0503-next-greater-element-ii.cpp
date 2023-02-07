class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        vector<int> v;
        int n=a.size();
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=i+1;j<n+i;j++){
                if(a[j%n]>a[i]){
                    flag=1;
                    v.push_back(a[j%n]);
                    break;
                }
            }
            if(flag==0) v.push_back(-1);
        }
        return v; 
    }
};