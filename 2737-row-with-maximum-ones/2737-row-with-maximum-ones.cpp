class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maximum = 0;
        vector<int> ans(2, 0);
        for (int i = 0; i < mat.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    count++;
                }
                if (count > maximum)
                {
                    maximum = count;
                    ans[0] = i;
                    ans[1] = maximum;
                }
            }
        }
        return ans;
    }
};