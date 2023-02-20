class Solution {
public:
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& a, int k) {
       int n=a.size();
        int m=a[0].size();
        priority_queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            q.push({a[i][k],i});
        }
        vector<vector<int>> v;
        while(!q.empty()){
            int row=q.top().second;
            q.pop();
            v.push_back(a[row]);
        }
        return v;
    }
};