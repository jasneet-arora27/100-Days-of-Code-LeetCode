class Solution {
public:
    string truncateSentence(string s, int k) {
        int spaces = k - 1;
        string ans = "";
        int i = 0;
        while (i < s.length())
        {
            if (s[i] == ' ')
            {
                spaces--;
            }

            if (spaces >= 0)
            {
                ans += s[i];
            }

            i++;
        }
        return ans;
    }
};