class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                // check current spot available or not
                bool canPlant = true;

                // check previous spot
                if (i > 0 && flowerbed[i - 1] == 1) {
                    canPlant = false;
                }

                // check next spot
                if (i < size - 1 && flowerbed[i + 1] == 1) {
                    canPlant = false;
                }

                if (canPlant) {
                    flowerbed[i] = 1; // plant flower
                    count++;

                    // if enough flowers, return true
                    if (count >= n) {
                        return true;
                    }
                }
            }
        }

        return count >= n;
    }
};
