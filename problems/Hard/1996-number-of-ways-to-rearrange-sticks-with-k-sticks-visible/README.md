# Number of Ways to Rearrange Sticks With K Sticks Visible

**Difficulty:** Hard  
**URL:** [number-of-ways-to-rearrange-sticks-with-k-sticks-visible](https://leetcode.com/problems/number-of-ways-to-rearrange-sticks-with-k-sticks-visible/)  
**Tags:** Math, Dynamic Programming, Combinatorics

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

There are n uniquely-sized sticks whose lengths are integers from 1 to n. You want to arrange the sticks such that exactly k&nbsp;sticks are visible from the left. A stick&nbsp;is visible from the left if there are no longer&nbsp;sticks to the left of it.


	For example, if the sticks are arranged [1,3,2,5,4], then the sticks with lengths 1, 3, and 5 are visible from the left.


Given n and k, return the number of such arrangements. Since the answer may be large, return it modulo 109 + 7.

&nbsp;
Example 1:


Input: n = 3, k = 2
Output: 3
Explanation: [1,3,2], [2,3,1], and [2,1,3] are the only
