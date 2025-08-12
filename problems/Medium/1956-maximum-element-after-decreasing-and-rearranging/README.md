# Maximum Element After Decreasing and Rearranging

**Difficulty:** Medium  
**URL:** [maximum-element-after-decreasing-and-rearranging](https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/)  
**Tags:** Array, Greedy, Sorting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an array of positive integers arr. Perform some operations (possibly none) on arr so that it satisfies these conditions:


	The value of the first element in arr must be 1.
	The absolute difference between any 2 adjacent elements must be less than or equal to 1. In other words, abs(arr[i] - arr[i - 1]) <= 1 for each i where 1 <= i < arr.length (0-indexed). abs(x) is the absolute value of x.


There are 2 types of operations that you can perform any number of times:


	Decrease the value of any element of arr to a smaller positive integer.
	Rearrange the elements of arr to be in a
