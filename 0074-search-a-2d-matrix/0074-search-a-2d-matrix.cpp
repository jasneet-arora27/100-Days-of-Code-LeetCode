class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size();
        for (vector<int> v: matrix)
        {
            for (int i = 0; i < m; i++)
            {
                if (v[i] == target) return true;
            }
        }
        return false;
    }
};