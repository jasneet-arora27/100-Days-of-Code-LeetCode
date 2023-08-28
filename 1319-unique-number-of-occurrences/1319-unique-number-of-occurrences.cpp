class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int hash[2001] = {0};  
        
        for (int i = 0; i < arr.size(); i++) 
        {
            hash[arr[i] + 1000]++;  
        }    
        
        bool unique[1001] = {0};
        
        for (int i = 0; i < 2001; i++) 
        {
            if (hash[i] != 0) 
            {
                if (unique[hash[i]]) 
                {
                    return false;
                }
                unique[hash[i]] = true;
            }
        }
        
        return true;  
    }
};
