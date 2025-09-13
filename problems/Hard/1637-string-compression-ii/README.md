# String Compression II

**Difficulty:** Hard  
**URL:** [string-compression-ii](https://leetcode.com/problems/string-compression-ii/)  
**Tags:** String, Dynamic Programming

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Run-length encoding is a string compression method that works by&nbsp;replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string&nbsp;"aabccc"&nbsp;we replace "aa"&nbsp;by&nbsp;"a2"&nbsp;and replace "ccc"&nbsp;by&nbsp;"c3". Thus the compressed string becomes "a2bc3".

Notice that in this problem, we are not adding&nbsp;'1'&nbsp;after single characters.

Given a&nbsp;string s&nbsp;and an integer k. You need to delete at most&nbsp;k charac
