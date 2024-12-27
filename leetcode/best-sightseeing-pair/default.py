# greedy
from typing import List


class Solution:
  def maxScoreSightseeingPair(self, nums: List[int]) -> int: 
    max_score = 0

    for i in range(len(nums)):
      for j in range(i + 1, len(nums)):
        max_score = max(max_score, nums[i] + nums[j] + i - j)
    return max_score

# TIME LIMIT EXCEEDED O(n^2)
result = Solution().maxScoreSightseeingPair([8,1,5,2,6])
print(result)