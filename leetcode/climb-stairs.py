class Solution:
  def __init__(self):
    self.dp = {}

  def climbStairs(self, n: int, step_size = 0) -> int:
    if n == 0: return 1

    steps_left = n - step_size

    if f"{steps_left}" in self.dp: return self.dp.get(f"{steps_left}") 
    
    one = self.climbStairs(steps_left, 1)
    two = self.climbStairs(steps_left, 2) if steps_left >= 2 else 0


    self.dp[f"{steps_left}"] = one + two

    return one + two


result = Solution().climbStairs(38)
print(result)