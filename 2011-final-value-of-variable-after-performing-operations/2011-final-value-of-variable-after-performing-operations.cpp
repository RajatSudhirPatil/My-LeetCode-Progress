class Solution {
public:
    int finalValueAfterOperations(vector<string>& opns) {
        int x=0;
        int i=0;
        int n=opns.size();
        while(i<n){
            string k=opns[i];
            if(k=="++X") ++x;
            else if(k=="X++") x++;
            else if(k=="--X") --x;
            else if(k=="X--") x--;
            i++;
        }
        return x;
    }
};