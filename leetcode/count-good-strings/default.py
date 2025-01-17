class Solution:
  def __init__(self):
    self.good_ways = 0

  def countGoodStrings(self, low: int, high: int, zero: int, one: int, str = "", state = None) -> int:
    if state == "one": str += "1" * one
    elif state == "zero": str += "0" * zero
    
    if len(str) >= low and len(str) <= high: self.good_ways += 1
    if len(str) == high: return self.good_ways

    if len(str) <= high - zero + 1: self.countGoodStrings(low, high, zero, one, str, "zero")
    if len(str) <= high - one + 1: self.countGoodStrings(low, high, zero, one, str, "one")

    return self.good_ways


result1 = Solution().countGoodStrings(3, 3, 1, 1)
# result2 = Solution().countGoodStrings(2, 3, 1, 2)
result2 = Solution().countGoodStrings(200, 200, 10, 1)
print(result1, result2)