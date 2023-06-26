class Solution {
public:
    int kthFactor(int n, int k) 
    {
        int ans = -1, fac_num = 0;
        for (int i = 1; i <= n; i++) //range to find factors
        {
            if (n % i == 0) //factor found
            {
                fac_num++;
                if (fac_num == k) //correct posn matched
                {
                    ans = i;
                    break;
                }
            }
        }
        return ans;
    }
};