class Solution {
public:
    int sum_string(string str)
    {
        int sum = 0;
        for (char ele : str)
        {
            sum += (int)ele;
        }
        return sum;
    }

    char findTheDifference(string s, string t) {
        int s_sum = sum_string(s), t_sum = sum_string(t);
        int sum_diff = t_sum - s_sum;
        char diff = (char)sum_diff; 
        return diff;
    }
};