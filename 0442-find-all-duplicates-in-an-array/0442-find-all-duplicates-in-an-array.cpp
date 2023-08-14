class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        int hash[100001] = {0}; 
        for (int num : nums) 
        {
            hash[num]++; 
        }

        for (int i = 1; i <= nums.size(); i++) 
        { 
            if (hash[i] == 2) 
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};