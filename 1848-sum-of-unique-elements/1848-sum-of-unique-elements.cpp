class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int hash[101] = {0};
        for (int i = 0; i < nums.size(); i++)
        {
            hash[nums[i]]++;
        }

        int sum = 0;
        for (int i = 0; i < 101; i++)
        {
            if (hash[i] == 1)
            {
                sum += i;
            }
        }

        return sum;
    }
};