class Solution {
public:
    bool checkMax(vector<int>& candies, int n)
    {
        int maximum = candies[0];
        for (int i = 0; i < (int)candies.size(); i++)
        {
            if (candies[i] > maximum)
            {
                maximum = candies[i];
            }
        }
        return (n >= maximum);
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> ans;
        int maximum = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < (int)candies.size(); i++)
        {
            if (checkMax(candies, candies[i] + extraCandies))
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }    
        return ans;
    }
};