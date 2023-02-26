class Solution {
public:
    string addStrings(string n1, string n2) {
        int i=n1.size()-1;
        int j=n2.size()-1;
        string a="";
        int carry=0;
        while(i>=0 || j>=0 || carry){
            int sum=0;
            if(i>=0) {sum+=(n1[i]-'0');i--;}
            if(j>=0) {sum+=(n2[j]-'0');j--;}
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            a=a+to_string(sum);
        }
        reverse(a.begin(),a.end());
        return a;
    }
};