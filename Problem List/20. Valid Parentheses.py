class Solution:
    def isValid(self, s: str) -> bool:
        combinations = {'(': ')', '[': ']', '{': '}'}
        openings = ['(', '[', '{']
        closings = [')', ']', '}']
        order = []
        for c in s:
            if c in openings:
                order.append(c)
            else:
                if combinations[order[-1]] != c:
                    return False
                order.pop()
        
        if len(order) == 0:
            return True
        return False
