class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num : nums)
        {
            string numStr = to_string(num);
            if (numStr.length() % 2 == 0) count++;
        }
        return count;
    }
};