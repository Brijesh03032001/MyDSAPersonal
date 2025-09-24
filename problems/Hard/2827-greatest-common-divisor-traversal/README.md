# Greatest Common Divisor Traversal

**Difficulty:** Hard  
**URL:** [greatest-common-divisor-traversal](https://leetcode.com/problems/greatest-common-divisor-traversal/)  
**Tags:** Array, Math, Union-Find, Number Theory

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a 0-indexed integer array nums, and you are allowed to traverse between its indices. You can traverse between index i and index j, i != j, if and only if gcd(nums[i], nums[j]) > 1, where gcd is the greatest common divisor.

Your task is to determine if for every pair of indices i and j in nums, where i < j, there exists a sequence of traversals that can take us from i to j.

Return true if it is possible to traverse between all such pairs of indices, or false otherwise.

&nbsp;
Example 1:


Input: nums = [2,3,6]
Output: true
Explanation: In this example, there are 3 possible pair
