class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for (char ele : address)
        {
            if (ele != '.')
            {
                ans.push_back(ele);
            }
            else
            {
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
        }
        return ans;
    }
};