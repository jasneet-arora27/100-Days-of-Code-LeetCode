class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int hash[26] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            hash[s[i] - 'a']++;
        }

        int val = hash[s[0] - 'a'];
        for (int i = 0; i < 26; i++)
        {
            if ((hash[i] != val) && (hash[i] != 0))
            {
                return false;
            }
        }

        return true;
    }
};