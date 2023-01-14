class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int flag=0;
        int count=0;
        for(auto i:m){
            if(i.second%2==0) count+=i.second;
            else{
                flag=1;
                count+=i.second-1;
            }
        }
        int ans=0;
        if(flag==0) ans=count;
        else ans=count+1;
        return ans;
    }
};