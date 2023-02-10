class Solution {
public:
    string largestGoodInteger(string a) {
        int n=a.size();
        int maxx=-11111;
        char maxch;
        int flag=0;
        for(int i=0;i<n-2;i++){
            if(a[i]==a[i+1] && a[i]==a[i+2]){
                if(a[i]-48 >= maxx){
                    maxx=(a[i]-48);
                    maxch=a[i];
                    flag=1;
                }
            }
        }
        string ans;
        if(flag==1){
            for(int i=0;i<3;i++) ans.push_back(maxch);
        }
        return ans;
    }
};