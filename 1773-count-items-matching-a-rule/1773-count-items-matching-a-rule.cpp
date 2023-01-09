class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rulekey, string rulevalue) {
        int count=0;
        for(int i=0;i<items.size();i++){
            if(rulekey=="type" && rulevalue==items[i][0]) count++;
            if(rulekey=="color" && rulevalue==items[i][1]) count++;
            if(rulekey=="name" && rulevalue==items[i][2]) count++;
        }
        return count;
    }
};
//items->0->type,1->color,2->name