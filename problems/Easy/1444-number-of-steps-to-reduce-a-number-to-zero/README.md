# Number of Steps to Reduce a Number to Zero

**Difficulty:** Easy  
**URL:** [number-of-steps-to-reduce-a-number-to-zero](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/)  
**Tags:** Math, Bit Manipulation

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an integer num, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

&nbsp;
Example 1:


Input: num = 14
Output: 6
Explanation:&nbsp;
Step 1) 14 is even; divide by 2 and obtain 7.&nbsp;
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3.&nbsp;
Step 4) 3 is odd; subtract 1 and obtain 2.&nbsp;
Step 5) 2 is even; divide by 2 and obtain 1.&nbsp;
Step 6) 1 is odd; subtract 1 and obtain 0.


Example 2:


Input: num = 8
Output: 4
Explanation:&nbsp;
