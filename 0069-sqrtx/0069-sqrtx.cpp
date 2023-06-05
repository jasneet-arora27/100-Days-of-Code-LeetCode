class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }

        double prev = 0;
        double curr = 1;

        while (prev != curr) {
            prev = curr;
            curr = (prev + x / prev) / 2;
        }

        return int(curr);
    }
};
