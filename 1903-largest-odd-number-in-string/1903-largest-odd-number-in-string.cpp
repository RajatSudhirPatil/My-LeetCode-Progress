class Solution {
public:
    string largestOddNumber(string a) {
        int n=a.size();
        int ind;
        for(int i=n-1;i>=0;i--){
            if((a[i]-48)%2!=0){
                ind=i;
                break;
            }
        }
        string b;
        for(int i=0;i<=ind;i++){
            b.push_back(a[i]);
        }
        return b;
    }
};