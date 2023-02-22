class Solution {
public:
    int countLargestGroup(int n) {
        map<int,int> m;
        int mx=-1;
        for(int i=1;i<=n;i++){
            int k=i;
            int dgsm=0;
            while(k>0){
                dgsm+=k%10;
                k=k/10;
            }
            m[dgsm]++;
        }
        int c=0;
        for(auto i:m){
            if(i.second>mx) mx=i.second;
        }
        for(auto i:m){
            if(i.second==mx) c++;
        }
       // cout<<c;
        return c;
    }
};