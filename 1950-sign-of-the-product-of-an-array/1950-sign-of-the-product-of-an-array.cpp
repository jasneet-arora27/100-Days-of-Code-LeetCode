class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int sign = 1;
        for (int ele : nums)
        {
            if (ele < 0)
            {
                sign *= -1;
            }
            else if (ele == 0)
            {
                return 0;
            }
        }
        return sign;
    }
};