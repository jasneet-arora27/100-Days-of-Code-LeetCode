class Solution {
public:
    int findLucky(vector<int>& arr) {
        int hash[1001] = {0};

        for (int num : arr) 
        {
            hash[num]++;
        }

        int largest = -1;
        for (int i = 0; i < 1001; i++) 
        {
            if ((hash[i] == i) && (hash[i] > 0)) 
            {
                largest = i;
            }
        }
        
        return largest;
    }
};
