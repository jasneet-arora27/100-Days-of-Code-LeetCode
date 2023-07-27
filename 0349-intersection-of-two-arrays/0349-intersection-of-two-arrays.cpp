#include <iostream>
#include <vector>
#include <set>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    nums3.push_back(nums1[i]);
                }
            }
        }
        set<int> ansSet;
        for (int n : nums3)
        {
            ansSet.insert(n);
        }
        vector<int> ansVector(ansSet.begin(), ansSet.end());
        return ansVector;
    }
};
