class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto pos=word.find(ch);
        if(pos!=string::npos){
            reverse(word.begin(),word.begin()+pos+1);
        }
        return word;
    }
};