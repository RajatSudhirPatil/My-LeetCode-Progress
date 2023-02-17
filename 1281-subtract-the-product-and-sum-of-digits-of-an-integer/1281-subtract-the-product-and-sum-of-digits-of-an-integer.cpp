class Solution {
public:
    int subtractProductAndSum(int n) {
        int num=n;
        int sum=0;
        int pro=1;
        while(num){
            sum+=num%10;
            pro*=num%10;
            num=num/10;
        }
        return pro-sum;
    }
};