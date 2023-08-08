class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string ans = "";
        int minLength;

        // Find the minimum length of all strings in the vector
        for (string s : strs) {
            minLength = min(minLength, static_cast<int>(s.size()));
        }

        // Compare characters at the same position in all strings
        for (int i = 0; i < minLength; i++) {
            char currentChar = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != currentChar) {
                    // Found a mismatch, return the current common prefix
                    return ans;
                }
            }
            ans += currentChar;
        }

        return ans;
    }
};
