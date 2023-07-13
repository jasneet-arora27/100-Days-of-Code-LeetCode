class Solution {
public:
    int maximum69Number (int num) 
    {
        string num_s = to_string(num);
        for (int i = 0; i < num_s.size(); i++)
        {
            if (num_s[i] == '6')
            {
                num_s[i] = '9';
                break;
            }
        }
        return stoi(num_s);
    }
};