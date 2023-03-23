class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>ans;
        for(int i=0;i<s.length();i++){
            int k=i;
           if(isdigit(s[i])){
               string a;
               while(isdigit(s[k])){
                   a += s[k];
                   k++;
               }
               ans.push_back(stoi(a));
               a.clear();
               i=k;
           }
        }
        bool flag = true;
        int n=ans.size();
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]>=ans[i+1]){
                flag = false;
            }
        }
       cout<<n;
        if(flag==true){
            return true;
        }
        else{
            return false;
        }
    }
};