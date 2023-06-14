#include<iostream>
#include<stdio.h>

class Solution {
public:
    int nthUglyNumber(int n) {
        if (n <= 0) {
            return 0; 
        }

        int* arr = new int[n];
        arr[0] = 1; 
        int nextIndex = 1;

        int i2 = 0, i3 = 0, i5 = 0; 
        while (nextIndex < n) 
        {
            int nextUgly = min({arr[i2] * 2, arr[i3] * 3, arr[i5] * 5});
            arr[nextIndex] = nextUgly;

            if (nextUgly == arr[i2] * 2) 
            {
                i2++;
            }
            if (nextUgly == arr[i3] * 3) 
            {
                i3++;
            }
            if (nextUgly == arr[i5] * 5)
            {
                i5++;
            }

            nextIndex++;
        }

        int result = arr[n - 1]; 
        return result;
    }
};
