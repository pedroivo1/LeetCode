class Solution:
    def romanToInt(self, s: str) -> int:
        roman_values = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }

        length = len(s)
        number = roman_values[s[0]]
        i = 1
        while i < length:

            if roman_values[s[i]] > roman_values[s[i-1]]:
                number += roman_values[s[i]] - 2*roman_values[s[i-1]] 
            else:
                number += roman_values[s[i]]
            
            i += 1

        return number
