class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
        int count = 0;
        for (int i = 0; i < items.size(); i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int index;
                if (ruleKey == "type") index = 0;
                else if (ruleKey == "color") index = 1;
                else index = 2;

                if ((items[i][j] == ruleValue) && (j == index)) count++;
            }
        }
        return count;
    }
};