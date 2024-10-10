# 1512. Number of Good Pairs
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count, res = [0] * (max(nums) + 1), 0
        for num in nums:
            count[num] += 1
        for n in count:
            res += int(n * (n-1)/2)
        return res
