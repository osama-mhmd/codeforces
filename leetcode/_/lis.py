from bisect import bisect_left
from typing import List

def lengthOfLIS(nums: List[int]) -> int:
  if not nums:
    return 0
  curr = []
  for num in nums:
    i = bisect_left(curr, num)
    print(i)
    if i == len(curr):
      curr.append(num)
    else:
      curr[i] = num
  return len(curr)
    
lengthOfLIS([10,9,2,5,3,7,101,18])
