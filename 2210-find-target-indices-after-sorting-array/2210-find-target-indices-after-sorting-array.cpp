class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int ind = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] < nums[ind])
                {
                    ind = j;
                }
            }
            swap(nums[ind], nums[i]);
        } 

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] == target) 
            {
                ans.push_back(i);
            }
        }
        return ans;
        }   
    };