class Solution:
  def maxScoreSightseeingPair(self, values):
    n = len(values)

    max_left_score = values[0]
    max_score = 0

    for i in range(1, n):
      max_score = max(max_score, max_left_score + values[i] - i)

      max_left_score = max(max_left_score, values[i] + i)

    return max_score  
  
# Approach
# We will go through each number, and add it to the pervious left score
# And in each iteration, we will add the current number + i to the left scores
# NOW THIS APPROACH IS O(n)