# Least Number of Unique Integers after K Removals

**Difficulty:** Medium  
**URL:** [least-number-of-unique-integers-after-k-removals](https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/)  
**Tags:** Array, Hash Table, Greedy, Sorting, Counting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an array of integers&nbsp;arr&nbsp;and an integer k.&nbsp;Find the least number of unique integers&nbsp;after removing exactly k elements.




&nbsp;
Example 1:


Input: arr = [5,5,4], k = 1
Output: 1
Explanation: Remove the single 4, only 5 is left.

Example 2:


Input: arr = [4,3,1,1,3,3,2], k = 3
Output: 2
Explanation: Remove 4, 2 and either one of the two 1s or three 3s. 1 and 3 will be left.

&nbsp;
Constraints:


	1 <= arr.length&nbsp;<= 10^5
	1 <= arr[i] <= 10^9
	0 <= k&nbsp;<= arr.length
