# Smallest String With Swaps

**Difficulty:** Medium  
**URL:** [smallest-string-with-swaps](https://leetcode.com/problems/smallest-string-with-swaps/)  
**Tags:** Array, Hash Table, String, Depth-First Search, Breadth-First Search, Union-Find, Sorting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a string s, and an array of pairs of indices in the string&nbsp;pairs&nbsp;where&nbsp;pairs[i] =&nbsp;[a, b]&nbsp;indicates 2 indices(0-indexed) of the string.

You can&nbsp;swap the characters at any pair of indices in the given&nbsp;pairs&nbsp;any number of times.

Return the&nbsp;lexicographically smallest string that s&nbsp;can be changed to after using the swaps.

&nbsp;
Example 1:


Input: s = "dcab", pairs = [[0,3],[1,2]]
Output: "bacd"
Explaination: 
Swap s[0] and s[3], s = "bcad"
Swap s[1] and s[2], s = "bacd"


Example 2:


Input: s = "dcab", pairs = [[0,3],[1,2],[0,2]]
