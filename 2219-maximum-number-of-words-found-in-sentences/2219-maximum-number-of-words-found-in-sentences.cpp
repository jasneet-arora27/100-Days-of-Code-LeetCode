#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int countWords(const string& sentence) {
        int count = 1;
        for (char ele : sentence) {
            if (ele == ' ') {
                count++;
            }
        }
        return count;
    }

    int mostWordsFound(const vector<string>& sentences) {
        int max = 0;
        for (int i = 0; i < sentences.size(); i++) {
            if (countWords(sentences[i]) > max) {
                max = countWords(sentences[i]);
            }
        }
        return max;
    }
};
