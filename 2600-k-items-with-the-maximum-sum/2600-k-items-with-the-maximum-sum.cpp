class Solution {
public:
    int kItemsWithMaximumSum(int n1, int n0, int n, int k) {
        int sum=0;
            while(n1 && k){
                sum+=1;
                n1--;
                k--;
            }
            while(n0 && k){
                n0--;
                k--;
            }
            while(n && k){
                sum-=1;
                n--;
                k--;
            }
        return sum;
    }
};