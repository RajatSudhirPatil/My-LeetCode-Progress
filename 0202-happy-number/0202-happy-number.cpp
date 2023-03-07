class Solution {
public:
    int sqsm(int n){
        int num=0;
        while(n){
            num+=(n%10)*(n%10);
            n=n/10;
        }
        return num;
    }
    bool isHappy(int n) {
        set<int> s;
        while(sqsm(n)!=1){
            if(s.find(sqsm(n))!=s.end()) return false;
            else{
                s.insert(sqsm(n));
                n=sqsm(n);
            }
        }
        return true;
    }
};