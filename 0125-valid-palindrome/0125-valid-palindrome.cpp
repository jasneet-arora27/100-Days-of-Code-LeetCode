#include <cctype> // for isalnum function

class Solution {
public:
    bool isPalindrome(string s) {
        string cleanString = "";
        
        // Remove non-alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                cleanString += tolower(c);
            }
        }
        
        // Check if the cleaned string is a palindrome
        int left = 0;
        int right = cleanString.length() - 1;
        while (left < right) {
            if (cleanString[left] != cleanString[right]) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
};
