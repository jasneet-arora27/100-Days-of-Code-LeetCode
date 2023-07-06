class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0, neg = 0;
        for (int ele : nums)
        {
            if (ele < 0)
            {
                neg++;
            }
            else if (ele > 0)
            {
                pos++;
            }
            else
            {
                continue;
            }
        }
        return max(pos, neg);
    }
};