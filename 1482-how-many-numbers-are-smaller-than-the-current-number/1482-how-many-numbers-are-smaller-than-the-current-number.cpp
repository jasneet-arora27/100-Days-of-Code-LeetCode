class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        vector<int> counts(size, 0); 
        for (int i = 0; i < size; i++) 
        {
            int count = 0;
            for (int j = 0; j < size; j++) 
            {
                if (j == i) 
                {
                    continue;
                }
                if (nums[j] < nums[i]) {
                    count++;
                }
            }
            counts[i] = count;  
        }

        return counts;
    }
};