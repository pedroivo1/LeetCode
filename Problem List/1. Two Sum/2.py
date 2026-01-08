class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashed_numbers = {}
        for i, n in enumerate(nums):
            pair = target - n

            if pair in hashed_numbers:
                j = hashed_numbers[pair]
                return [j, i]
            hashed_numbers[n] = i

        return None

