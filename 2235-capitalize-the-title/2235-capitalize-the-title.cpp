class Solution {
public:
    char toLower(char c) 
    {
        return (c >= 'A' && c <= 'Z') ? (c + 32) : c;
    }

    char toUpper(char c) 
    {
        return (c >= 'a' && c <= 'z') ? (c - 32) : c;
    }

    string modifyWord(string word) {
    if (word.length() <= 2) {
        for (char &c : word) {
            c = toLower(c); // Convert lowercase to uppercase
        }
    } 
    else 
    {
        word[0] = toUpper(word[0]); // Convert first character to uppercase
        for (int i = 1; i < word.length(); i++) 
        {
            word[i] = toLower(word[i]); // Convert remaining characters to lowercase
        }
    }
    return word;
}

    string capitalizeTitle(string title) {
    istringstream iss(title);
    string word, modifiedTitle;
    bool firstWord = true;

    while (iss >> word) 
    {
        if (!firstWord) 
        {
            modifiedTitle += " "; // Add space if it's not the first word
        } 
        else 
        {
            firstWord = false;
        }
        modifiedTitle += modifyWord(word); // Modify the word and add it to modifiedTitle
    }

    return modifiedTitle;
}

};