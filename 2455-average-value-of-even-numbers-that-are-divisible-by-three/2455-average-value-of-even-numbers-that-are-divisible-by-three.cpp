class Solution {
public:
    int averageValue(vector<int>& a) {
        int sum=0,count=0;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==0 && a[i]%3==0){
                sum+=a[i];
                count++;
            }
        }
        if(count==0)
            return 0;
        return sum/count;
    }
};