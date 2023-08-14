class Solution {
public:
    int findLucky(vector<int>& arr) {
        int hash[501] = {0};

        for (int i = 0; i < arr.size(); i++)
        {
            hash[arr[i]]++;
        }

        int largest = -1;
        for (int i = 0; i < 501; i++)
        {
            if ((hash[i] == i) && (hash[i] > largest) && (hash[i] > 0))
            {
                largest = i;
            }
        }
        return largest;
    }
};