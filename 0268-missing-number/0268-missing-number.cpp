class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() + 1;
        int sum_total = (n * (n + 1) / 2) - n;
        int sum_nums = 0;
        for (int num : nums)
        {
            sum_nums += num;
        }
        return sum_total - sum_nums;
    }
};