class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int s=0,e=s1.size()-1;
        while(s<=e){
            if(s1[s]==s2[s]) s++;
            else if(s1[e]==s2[e]) e--;
            else{
                swap(s1[s],s1[e]);
                return s1==s2;
            }
        }
        return true;
    }
};