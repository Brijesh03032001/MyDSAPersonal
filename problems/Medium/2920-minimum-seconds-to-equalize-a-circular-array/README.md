# Minimum Seconds to Equalize a Circular Array

**Difficulty:** Medium  
**URL:** [minimum-seconds-to-equalize-a-circular-array](https://leetcode.com/problems/minimum-seconds-to-equalize-a-circular-array/)  
**Tags:** Array, Hash Table

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a 0-indexed array nums containing n integers.

At each second, you perform the following operation on the array:


	For every index i in the range [0, n - 1], replace nums[i] with either nums[i], nums[(i - 1 + n) % n], or nums[(i + 1) % n].


Note that all the elements get replaced simultaneously.

Return the minimum number of seconds needed to make all elements in the array nums equal.

&nbsp;
Example 1:


Input: nums = [1,2,1,2]
Output: 1
Explanation: We can equalize the array in 1 second in the following way:
- At 1st second, replace values at each index with [nums[3],nums[1],
