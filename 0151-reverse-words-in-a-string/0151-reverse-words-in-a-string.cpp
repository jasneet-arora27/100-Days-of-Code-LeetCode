class Solution {
public:
    string reverseWords(string s) {
        string rev = "";
        int i = s.length() - 1;
        
        while (i >= 0) 
        {
            while ((i >= 0) && (s[i] == ' ')) 
            {
                i--;
            }
            
            if (i < 0) 
            {
                break;
            }
            
            if (!rev.empty()) 
            {
                rev += ' ';
            }
            
            string word = "";
            while ((i >= 0) && (s[i] != ' ')) 
            {
                word = s[i] + word;
                i--;
            }
            
            rev += word;
        }
        
        return rev;
    }
};