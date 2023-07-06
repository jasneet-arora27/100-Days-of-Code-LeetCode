#include <algorithm>
class Solution {
public:
    int sumAccount(const vector<int>& acnt)
    { 
        int sum = 0;
        for (int i = 0; i < acnt.size(); i++) {
            sum += acnt[i];
        }
        return sum;
    }

    int maximumWealth(const vector<vector<int>>& accounts) 
    { 
        vector<int> accountsSum;
        for (int i = 0; i < accounts.size(); i++) {
            accountsSum.push_back(sumAccount(accounts[i]));
        }
        return *max_element(accountsSum.begin(), accountsSum.end()); 
    }
};
