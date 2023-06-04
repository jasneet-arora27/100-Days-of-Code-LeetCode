class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1.0;
        
        if (n < 0) {
            if (n == INT_MIN) {
                x = 1.0 / x;
                return x * myPow(x, -(n + 1));
            }
            n = -n;
            x = 1.0 / x;
        }
        
        return powHelper(x, n);
    }
    
private:
    double powHelper(double x, int n) {
        if (n == 0)
            return 1.0;
        
        double half = powHelper(x, n / 2);
        double result = half * half;
        
        if (n % 2 != 0)
            result *= x;
        
        return result;
    }
};
