class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int num : nums)
        {
            int dig = 0;
            while (num > 0)
            {
                dig++;
                num /= 10;
            }
            if (dig % 2 == 0) ans++;
        }
        return ans;
    }
};