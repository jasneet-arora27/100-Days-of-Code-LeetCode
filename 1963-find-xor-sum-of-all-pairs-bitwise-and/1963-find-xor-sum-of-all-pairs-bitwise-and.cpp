class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        
        int ans1 = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            ans1 ^= arr1[i];
        }

        int ans2 = 0;
        for (int i = 0; i < arr2.size(); i++)
        {
            ans2 ^= arr2[i];
        }

        return ans1 & ans2;
    }
};