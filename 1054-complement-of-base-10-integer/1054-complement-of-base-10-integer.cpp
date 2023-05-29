class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0)
        {
            return 1;
        }
        int power = 0, ans = 0, digit = 0;
        while (n != 0)
        {
            if (n%2 == 0)
            {
                digit = 1;
            }
            else
            {
                digit = 0;
            }
            ans += digit * pow(2, power); 
            power += 1;
            n /= 2;
        }
        return ans;

    }
};