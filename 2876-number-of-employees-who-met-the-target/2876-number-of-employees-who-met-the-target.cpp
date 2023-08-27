class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for (int work : hours)
        {
            if (work >= target) count++;
        }
        return count;
    }
};