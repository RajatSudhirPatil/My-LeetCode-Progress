class Solution {
public:
    string getHint(string secret, string guess) {
        int b=0;
        int c=0;
        map<char,int> m;
        for(int i=0;i<guess.size();i++){
            if(guess[i]==secret[i]){
                b++;
                guess[i]='@';
                secret[i]='$';
            }
            if(isdigit(secret[i])) m[secret[i]]++;
        }
        cout<<secret<<" "<<guess<<endl;
        cout<<b<<" ";
        for(auto i:guess){
            if(m[i]>0){
                c++;
                m[i]--;
            }
        }
        string k;
        string l;
        k=to_string(b);
        l=to_string(c);
        cout<<c<<endl;
        string a="";
        a+=k;
        a.push_back('A');
        a+=l;
        a.push_back('B');
        return a;
    }
};