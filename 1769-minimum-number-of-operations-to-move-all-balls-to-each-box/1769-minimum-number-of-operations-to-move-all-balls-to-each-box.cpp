class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int sum=0;
        for(int i=0;i<boxes.size();i++){
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]==49){
                    sum=sum+abs(i-j);
                }
            }
            ans.push_back(sum);
            sum=0;
        }
        return ans;
    }
};