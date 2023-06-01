class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int arr[2*n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = nums[i];
        }
        for (int i = n; i < 2*n; i++)
        {
            arr[i] = nums[i-n];
        }
        vector <int> ans (arr, arr + 2*n);
        return ans;
    }
};