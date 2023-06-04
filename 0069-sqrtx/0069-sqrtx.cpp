// class Solution {
// public:
//     int mySqrt(int x) {
//         int root;
//         for (int i = 1; i < x; i++)
//         {
//             if (i*i == x)
//             {
//                 root = i;
//                 break;
//             }
//         }
//         return root;
//     }
// };

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }

        double prev = 0;
        double curr = 1;

        while (prev != curr) {
            prev = curr;
            curr = (prev + x / prev) / 2;
        }

        return int(curr);
    }
};
