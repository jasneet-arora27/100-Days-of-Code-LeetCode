class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int length1 = word1.length(), length2 = word2.length();
        int max_len = max(length1, length2);
        string ans = "";
        for (int i = 0; i < max_len; i++)
        {
            // word1
            if (i < length1)
            {
                ans += word1[i];
            }
            // word2
            if (i < length2)
            {
                ans += word2[i];
            }
        }
        return ans;
    }
};