#include<algorithm>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //square nums
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        //sort squared nums
        sort(begin(nums), end(nums));
        //return nums
        return nums;
    }
};