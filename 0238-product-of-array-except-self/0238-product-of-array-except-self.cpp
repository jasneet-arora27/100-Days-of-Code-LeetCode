class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        
        int product = 1; // non-zero product
        int zeroCount = 0; // zero ele count

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                product *= nums[i];
            }
            else
            {
                zeroCount++;
            }
        }

        vector<int> ans(nums.size());

        if (zeroCount > 1)
        {
            return ans;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (zeroCount == 1)
            {
                if (nums[i] == 0)
                {
                    ans[i] = product;
                }
            }
            else
            { 
                ans[i] = product / nums[i];
            }
        }

        return ans;
    }
};
