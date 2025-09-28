# Add Two Promises

**Difficulty:** Easy  
**URL:** [add-two-promises](https://leetcode.com/problems/add-two-promises/)  
**Tags:** —

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given two promises promise1 and promise2, return a new promise. promise1 and promise2&nbsp;will both resolve with a number. The returned promise should resolve with the sum of the two numbers.
&nbsp;
Example 1:


Input: 
promise1 = new Promise(resolve => setTimeout(() => resolve(2), 20)), 
promise2 = new Promise(resolve => setTimeout(() => resolve(5), 60))
Output: 7
Explanation: The two input promises resolve with the values of 2 and 5 respectively. The returned promise should resolve with a value of 2 + 5 = 7. The time the returned promise resolves is not judged for this problem.


Example 2:
