class Solution {
public:
    int mostWordsFound(vector<string>& v) {
        int max=0;
        for(int i=0;i<v.size();i++){
            int count=0;
            int j=0;
            while(v[i][j]!='\0'){
                if(v[i][j]==' ') count++;
                j++;
            }
            if(count>max) max=count;
        }
        return max+1;
    }
};