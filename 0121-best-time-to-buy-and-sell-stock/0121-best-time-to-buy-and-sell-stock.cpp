class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least=INT_MAX;
        int pst=0;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<least){
                least=prices[i];
            }
            pst=prices[i]-least;
            if(pst>profit) profit=pst;
        }
        return profit;
    }
};