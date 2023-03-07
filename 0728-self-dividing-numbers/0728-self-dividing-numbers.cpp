class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> v;
        for(int i=l;i<=r;i++){
            int k=i;
            int flag=0;
            while(k){
                int r=k%10;
                if(r!=0 && i%r==0){
                    flag=1;
                }
                else {flag=0;break;}
                k=k/10;
            }
            if(flag){
                v.push_back(i);
            }
        }
        return v;
    }
};