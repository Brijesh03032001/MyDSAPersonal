# Closest Equal Element Queries

**Difficulty:** Medium  
**URL:** [closest-equal-element-queries](https://leetcode.com/problems/closest-equal-element-queries/)  
**Tags:** Array, Hash Table, Binary Search

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a circular array nums and an array queries.

For each query i, you have to find the following:


	The minimum distance between the element at index queries[i] and any other index j in the circular array, where nums[j] == nums[queries[i]]. If no such index exists, the answer for that query should be -1.


Return an array answer of the same size as queries, where answer[i] represents the result for query i.

&nbsp;
Example 1:


Input: nums = [1,3,1,4,1,3,2], queries = [0,3,5]

Output: [2,-1,3]

Explanation:


	Query 0: The element at queries[0] = 0 is nums[0] = 1. The nearest index
