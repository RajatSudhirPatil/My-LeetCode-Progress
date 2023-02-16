class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int i=0,j=height.size()-1;
        while(i<j){
            ans=max(ans,(j-i)*min(height[i],height[j]));
            if(height[j]<height[i]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};