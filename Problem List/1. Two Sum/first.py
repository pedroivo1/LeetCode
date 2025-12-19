class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashed_numbers = {}
        
        length = len(nums)
        i = 0
        while i < length:
            n = nums[i]
            pair = target - n
            try:
                j = hashed_numbers[pair]
                return [j, i]
            except:
                hashed_numbers[n] = i
                
            i += 1

