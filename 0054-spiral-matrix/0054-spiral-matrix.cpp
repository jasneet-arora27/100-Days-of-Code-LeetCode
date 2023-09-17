class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();   

        int startRow = 0, endRow = m - 1;
        int startCol = 0, endCol  = n - 1; 
        int count = 0;

        vector<int> ans;

        while ((startRow <= endRow) && (startCol <= endCol))
        {
            // start row
            for (int i = startCol; i <= endCol; i++)
            {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            if (count == m * n) return ans;

            // end column
            for (int i = startRow; i <= endRow; i++)
            {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            if (count == m * n) return ans;

            // end row
            for (int i = endCol; i >= startCol; i--)
            {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            if (count == m * n) return ans;

            // start column
            for (int i = endRow; i >= startRow; i--)
            {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
            if (count == m * n) return ans;
        }

        return ans;
    }
};