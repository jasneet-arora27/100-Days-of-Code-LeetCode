class Solution {
public:
    int countOccur(vector<int>& nums, int n)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == n)
            {
                count++;
            }
        }
        return count;
    }

    int singleNumber(vector<int>& nums) 
    {
        int ans = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (countOccur(nums, nums[i]) == 1)
            {
                ans =  nums[i];
            }
        }    
        return ans;
    }
};