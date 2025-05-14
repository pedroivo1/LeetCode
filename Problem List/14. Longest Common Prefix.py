from typing import List

# Best Big O
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 1:
            return strs[0]

        prefix = ''
        min_length = min(len(word) for word in strs)
        
        for i in range(min_length):
            for word in strs[1:]:
                if word[i] != strs[0][i]:
                    return prefix
            prefix += strs[0][i]

        return prefix
