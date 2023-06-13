class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }

        int factors[3] = {2, 3, 5};
        for (int fac : factors) {
            while (n % fac == 0) {
                n /= fac;
            }
        }

        return n == 1;
    }
};
