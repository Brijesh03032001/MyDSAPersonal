# Binary Trees With Factors

**Difficulty:** Medium  
**URL:** [binary-trees-with-factors](https://leetcode.com/problems/binary-trees-with-factors/)  
**Tags:** Array, Hash Table, Dynamic Programming, Sorting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an array of unique integers, arr, where each integer arr[i] is strictly greater than 1.

We make a binary tree using these integers, and each number may be used for any number of times. Each non-leaf node's value should be equal to the product of the values of its children.

Return the number of binary trees we can make. The answer may be too large so return the answer modulo 109 + 7.

&nbsp;
Example 1:


Input: arr = [2,4]
Output: 3
Explanation: We can make these trees: [2], [4], [4, 2, 2]

Example 2:


Input: arr = [2,4,5,10]
Output: 7
Explanation: We can make these trees: [2], [4], [5
