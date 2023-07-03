class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            if ((s.empty() == 1) || (s[i] != temp.back()))
            {
                temp.push_back(s[i]);
            }
            else
            {
                temp.pop_back();
            }
        }
        return temp;
    }
};