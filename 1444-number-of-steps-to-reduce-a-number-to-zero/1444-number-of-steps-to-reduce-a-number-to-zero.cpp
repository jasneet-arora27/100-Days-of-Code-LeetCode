class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num != 0)
        {
            count++;
            if (num % 2 == 0) //even
            {
                num /= 2;
            }
            else //odd
            {
                num -= 1;
            }
        }
        return count;
    }
    
};