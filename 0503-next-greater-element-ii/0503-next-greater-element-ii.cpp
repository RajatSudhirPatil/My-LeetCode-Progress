class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        vector<int> b;
        int n=a.size();
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=i+1;j<n+i;j++){
                if(a[j%n]>a[i]){
                    b.push_back(a[j%n]);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                 b.push_back(-1);
            
        }
        return b;
    }
};
//for(int j=(i+1)%n;j<n-1;j++)