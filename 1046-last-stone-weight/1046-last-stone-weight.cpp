class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        priority_queue<int> q;
        for(int i=0;i<v.size();i++){
            q.push(v[i]);
        }
        //if(q.size()==1) return 
        while(q.size()>1){
            int y=q.top();
            q.pop();
            int x=q.top();
            q.pop();
            if(x!=y){
                q.push(abs(y-x));
            }
        }
        return q.empty()?0:q.top();
    }
};