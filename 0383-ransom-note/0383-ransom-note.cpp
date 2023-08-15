class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash_ransom[26] = {0};
        int hash_magazine[26] = {0};

        // generate hash_ransom
        for (int i = 0; i < ransomNote.size(); i++)
        {
            hash_ransom[ransomNote[i] - 'a']++;
        }

        // generate hash_magazine
        for (int i = 0; i < magazine.size(); i++)
        {
            hash_magazine[magazine[i] - 'a']++;
        }

        // check ransomNote can be generated from magazine
        for (int i = 0; i < 26; i++)
        {
            if (hash_ransom[i] > hash_magazine[i])
            {
                return false;
            }
        }
        
        return true;
    }
};