class Solution:
  def maxScore(self, s: str) -> int:
    max_score = 0
    zeros_count = 0
    ones_count = 0
    
    array = list(s)
    total_ones_count = sum(int(char) for char in array)

    for i in range(len(s) - 1):
      if s[i] == "0":
        zeros_count += 1
      else:
        ones_count += 1

      current_score = zeros_count + (total_ones_count - ones_count)
      max_score = max(max_score, current_score)

    return max_score

# test cases
test_1 = Solution().maxScore("011101")
print(test_1, ", should be 5")
test_2 = Solution().maxScore("00111")
print(test_2, ", should be 5")
test_3 = Solution().maxScore("00")
print(test_3, ", should be 1")