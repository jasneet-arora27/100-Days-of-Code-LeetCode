class Solution {
public:
    long long coloredCells(int n) {
        if (n == 1)
        {
            return 1;
        }


        long long mid = 2 * n - 1;
        long long others = 0;

        for (int i = mid - 2; i >= 1; i -= 2)
        {
            others += i;
        }

        return mid + 2 * others;
    }
};