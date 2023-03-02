class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> a;
        if(num%3!=0) return a;
        else{
            a.push_back((num/3)-1);
            a.push_back((num/3));
            a.push_back((num/3)+1);
        }
        return a;
    }
};