class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int truckSize) {
        sort(b.begin(),b.end(),[](auto a,auto b){return a[1]>b[1];});
        int bx=0;
        for(auto i:b){
            if(truckSize<=0) break;
            bx+=min(truckSize,i[0])*i[1];
            truckSize-=i[0];
        }
        return bx;
    }
};