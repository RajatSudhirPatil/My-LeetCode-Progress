class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto i:m){
            cout<<i.first<<" "<<i.second<<endl;
            
        }
        int flag=0;
        int count=0;
        for(auto i:m){
            if(i.second%2==0) count+=i.second;
            if(i.second%2!=0) {
                flag=1;
                count+=i.second-1;
            }
        }
        if(flag==1) count=count+1;
       // count+=max;
        return count;
    }
};