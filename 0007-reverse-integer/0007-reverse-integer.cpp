class Solution {
public:
    int reverse(int x) {
        int rev = 0, orig = x;
        while (orig)
        {
            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) return 0;
            rev = rev*10 + orig%10;
            orig /= 10;
        }
        return rev;
    }
};