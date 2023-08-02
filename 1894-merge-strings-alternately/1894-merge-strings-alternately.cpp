class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int length = word1.length() + word2.length();
        int j = 0;
        string ans = "";
        for (int i = 0; i < length; i++) 
        {
            // word1
            if (j < word1.length()) 
            {
                ans += word1[j];
            }
            
            // word2
            if (j < word2.length()) 
            {
                ans += word2[j];
            }
            j += 1;
        }
        return ans;
    }
};
