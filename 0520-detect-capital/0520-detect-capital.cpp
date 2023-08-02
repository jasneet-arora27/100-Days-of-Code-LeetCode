class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital_count = 0;
        for (int i = 0; i < word.size(); i++)
        {
            if (isupper(word[i])) 
            {
                capital_count += 1;
            }

        }
        if ((capital_count == word.size()) || (capital_count == 0) || ((capital_count == 1) && isupper(word[0])))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};