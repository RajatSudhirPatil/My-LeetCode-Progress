class Solution {
public:
    int divisorSubstrings(int num, int k) {
       int divisor = num;
        string str_div = to_string(num);
        int i = 0;
        int beauty = 0;
        while (i < str_div.size() - k + 1) {
            int dividend = stoi(str_div.substr(i, k));
            if(dividend > 0) {
                if( divisor % dividend == 0) beauty++;
            }
            i++;
        }
        return beauty;
    }
};