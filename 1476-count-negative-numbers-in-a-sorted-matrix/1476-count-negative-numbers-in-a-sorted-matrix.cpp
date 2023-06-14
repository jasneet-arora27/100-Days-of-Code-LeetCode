class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (vector sub : grid)
        {
            for (int num : sub)
            {
                if (num < 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};