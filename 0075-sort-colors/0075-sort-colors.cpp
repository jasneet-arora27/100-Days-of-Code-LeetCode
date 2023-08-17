class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_0 = 0, count_1 = 0, count_2 = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                count_0 += 1;
            }
            else if (nums[i] == 1)
            {
                count_1 += 1;
            }
            else
            {
                count_2 += 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (count_0 > 0)
            {
                nums[i] = 0;
                count_0 -= 1;
            }
            else if (count_1 > 0)
            {
                nums[i] = 1;
                count_1 -= 1;
            }
            else if (count_2 > 0)
            {
                nums[i] = 2;
                count_2 -= 1;
            }
        }
    }
};