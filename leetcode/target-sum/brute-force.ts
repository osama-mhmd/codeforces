function calculateWays(
  nums: number[],
  target: number,
  currentIndex = 0,
  currentSum = 0
): number {
  if (currentIndex === nums.length) {
    if (currentSum === target) {
      return 1;
    }
    return 0;
  }

  const add = calculateWays(
    nums,
    target,
    currentIndex + 1,
    currentSum + nums[currentIndex]
  );
  const substract = calculateWays(
    nums,
    target,
    currentIndex + 1,
    currentSum - nums[currentIndex]
  );

  return add + substract;
}
function findTargetSumWays(nums: number[], target: number): number {
  const currentWays = calculateWays(nums, target);

  return currentWays;
}

// const result = findTargetSumWays([1, 1, 1, 1, 1], 3);
// console.log(result);
