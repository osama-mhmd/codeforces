function calculateWays2(
  nums: number[],
  target: number,
  currentIndex = 0,
  currentSum = 0,
  memo = new Map<string, number>()
): number {
  if (currentIndex === nums.length) {
    if (currentSum === target) {
      return 1;
    }
    return 0;
  }

  // cannot reach the target
  const remainingSum = nums.slice(currentIndex).reduce((a, b) => a + b, 0);
  if (target > remainingSum + currentSum) return 0;

  // Create a unique key for memoization
  const memoKey = `${currentIndex},${currentSum}`;

  // Check if the result is already computed
  if (memo.has(memoKey)) {
    return memo.get(memoKey)!;
  }

  const add = calculateWays2(
    nums,
    target,
    currentIndex + 1,
    currentSum + nums[currentIndex],
    memo
  );
  const substract = calculateWays2(
    nums,
    target,
    currentIndex + 1,
    currentSum - nums[currentIndex],
    memo
  );

  // store computation
  memo.set(memoKey, add + substract);

  return add + substract;
}
function findTargetSumWays2(nums: number[], target: number): number {
  const currentWays = calculateWays2(nums, target);

  return currentWays;
}

// const result = findTargetSumWays2([1, 1, 1, 1, 1], 3);
// console.log(result);
