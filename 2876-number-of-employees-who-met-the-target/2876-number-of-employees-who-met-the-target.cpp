class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for (int work : hours)
        {
            count += ((work >= target) && 1);
        }
        return count;
    }
};