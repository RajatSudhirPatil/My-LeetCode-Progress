class Solution {
public:
    int countDigits(int n) {
        vector<int> v;
        int k=n;
        while(k){
            v.push_back(k%10);
            k=k/10;
        }
        int c=0;
        for(int i=0;i<v.size();i++){
            if(n%v[i]==0) c++;
        }
        return c;
    }
};