class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() == 2) {
            return true;
        }

        // Starting coordinates
        int x1 = coordinates[0][0], y1 = coordinates[0][1];
        int x2 = coordinates[1][0], y2 = coordinates[1][1];

        // Check slope equality
        for (int i = 2; i < coordinates.size(); i++) {
            int y = coordinates[i][1];
            int x = coordinates[i][0];

            if (((y2 - y1) * (x - x1)) != ((y - y1) * (x2 - x1))) {
                return false;
            }
        }
        return true;
    }
};
