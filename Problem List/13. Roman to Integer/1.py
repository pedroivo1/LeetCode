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


        number = 0
        length = len(s)
        i = 0
        while i < length:

            if i < length-1:
                if roman_values[s[i]] >= roman_values[s[i+1]]:
                    number += roman_values[s[i]]
                    i += 1
                else:
                    number += roman_values[s[i+1]] - roman_values[s[i]]
                    i += 2
            else:
                number += roman_values[s[i]]
                i += 1

        return number
