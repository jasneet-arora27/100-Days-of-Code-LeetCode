class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int size = int(nums.size());
        for (int i = 0; i < size; i++) {
            if (nums[i] == target) {
                first = i;
                break;  
            }
        }
        for (int j = size - 1; j >= 0; j--) {
            if (nums[j] == target) {
                last = j;
                break; 
            }
        }
        
        return {first, last};
    }
};