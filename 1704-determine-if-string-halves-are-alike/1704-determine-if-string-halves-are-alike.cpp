class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1=0;
        int c2=0;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U') c1++;
        }
        for(int i=(s.size()/2);i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U') c2++;
        }
        cout<<c1<<" "<<c2<<endl;
        if(c1==c2) return true;
        return false;
    }
};