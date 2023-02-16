class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
       bool a=true,b=true;
        if(s1.size()!=s2.size()) return false;
        
        else{
            int n=s1.size();
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            
            for(int i=0;i<n;i++){
                a = (a && (s1[i]>=s2[i]));
                b = (b && (s1[i]<=s2[i]));
            }
            
        }
        return (a||b);
        
    }
};