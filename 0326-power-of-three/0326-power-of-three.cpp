class Solution {
public:
    bool isPowerOfThree(int n) {
        for (int i = 0; i < 31; i++)
        {
            if (pow(3,i) == n)
            {
                return true;
            }
        }
        return false;
    }
};