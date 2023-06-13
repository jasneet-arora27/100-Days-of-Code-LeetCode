class Solution {
public:
    int countPrimes(int n) {
        int* prime = new int[n];
        for (int i = 2; i < n; i++) {
            prime[i] = 0;
        }
        int count = 0;

        for (long long i = 2; i < n; i++) {
            if (prime[i] == 0) {
                for (long long j = i * i; j < n; j += i) {
                    prime[j] = 1;
                }
                count++;
            }
        }

        return count;
    }
};