class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char a=letters[0];
        sort(letters.begin(),letters.end());
        for(auto i:letters){
            if(i>target) return i;
        }
        return a;
    }
};