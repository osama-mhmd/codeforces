from typing import List

class Solution:
  def mincostTickets(self, days: List[int], costs: List[int], period = 0, i = 0) -> int:
    index = i
    
    if period:
      for cur in range(i, len(days)):
        pass

    self.mincostTickets(days, costs, 1, index)
    self.mincostTickets(days, costs, 7, index)
    self.mincostTickets(days, costs, 30, index)

# test cases
test_1 = Solution().mincostTickets([1, 4, 6, 7, 8, 20], [2, 7, 15])
test_2 = Solution().mincostTickets([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 30, 31], [2, 7, 15])
print("Test_1 should be 11, ... test_1: ", test_1)
print("Test_2 should be 17, ... test_2: ", test_2)