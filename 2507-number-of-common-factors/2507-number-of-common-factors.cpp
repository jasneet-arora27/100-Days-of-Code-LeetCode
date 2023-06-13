class Solution {
public:
    int commonFactors(int a, int b) 
    {
        // if (a == b)
        // {
        //     return 2;
        // }

        int small, big;
        if (a < b)
        {
            small = a, big = b;
        }   
        else
        {
            small = b, big = a;
        }

        int fac = 2;
        int count = 1;
        while (fac <= small)
        {
            if ((small%fac == 0) && (big%fac == 0))
            {
                count++;
            }
            fac++;
        }
        return count;
    }
};