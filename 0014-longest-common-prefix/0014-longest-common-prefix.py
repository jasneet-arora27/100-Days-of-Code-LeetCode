class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans = ""

        min_word = min(strs)
        max_word = max(strs)

        length = min(len(min_word), len(max_word))
        
        i = 0
        while (i < length):
            if (min_word[i] == max_word[i]):
                ans += min_word[i]
            else:
                return ans
            i += 1

        return ans