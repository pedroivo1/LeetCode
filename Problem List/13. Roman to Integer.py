# Best Big O
class Solution:
    def romanToInt(self, s: str) -> int:
        values = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        i = len(s)-1
        sum_ = values[s[i]]
        while i > 0:
            i -=1
            if values[s[i]] < values[s[i+1]]:
                sum_ -= values[s[i]]
            else:
                sum_ += values[s[i]]
        return sum_
