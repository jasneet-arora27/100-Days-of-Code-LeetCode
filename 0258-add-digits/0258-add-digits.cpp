class Solution {
public:
    int sumDigits(int num) {
        int sum = 0;
        while (num > 0) {
            int dig = num % 10;
            sum += dig;
            num /= 10;
        }
        return sum;
    }

    int addDigits(int num) {
        while (num >= 10) {
            num = sumDigits(num);
        }
        return num;
    }
};
