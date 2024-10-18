// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// Assumption: each input would have exactly one solution, and you may not use the same element twice.

function twoSum(nums: number[], target: number): number[] {
  for (let i = 0; i < nums.length; i++) {
    for (let j = i + 1; j < nums.length; j++) {
      if (nums[i] + nums[j] === target) return [i, j];
    }
  }

  return [];
}

// Test case
const indices = twoSum([1, 3, 6, 4, 9], 5);
console.log(indices);
