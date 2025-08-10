# Reduction Operations to Make the Array Elements Equal

**Difficulty:** Medium  
**URL:** [reduction-operations-to-make-the-array-elements-equal](https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/)  
**Tags:** Array, Sorting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an integer array nums, your goal is to make all elements in nums equal. To complete one operation, follow these steps:


	Find the largest value in nums. Let its index be i (0-indexed) and its value be largest. If there are multiple elements with the largest value, pick the smallest i.
	Find the next largest value in nums strictly smaller than largest. Let its value be nextLargest.
	Reduce nums[i] to nextLargest.


Return the number of operations to make all elements in nums equal.

&nbsp;
Example 1:


Input: nums = [5,1,3]
Output: 3
Explanation:&nbsp;It takes 3 operations to make all el
