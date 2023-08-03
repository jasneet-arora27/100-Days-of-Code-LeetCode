class Solution {
public:
    int countOdds(int low, int high) {
        int start;
        if (low % 2 == 0)
        {
            start = low + 1;
        }
        else
        {
            start = low;
        }

        int count = 0;
        for (int i = start; i <= high; i += 2)
        {
            count++;
        }

        return count;
    }
};