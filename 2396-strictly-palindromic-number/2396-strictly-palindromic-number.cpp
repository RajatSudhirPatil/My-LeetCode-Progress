class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int base=2;
        while(base<n-1){
            int k=n;
            vector<int> bin;
            while(k){
                bin.insert(bin.begin(),k%base);
                k=k/base;
            }
            int i=0,j=bin.size()-1;
            while(i<j){
                if(bin[i]==bin[j]){
                    i++;j--;
                }
                else return false;
            }
            base++;
        }
        return true;
    }
};