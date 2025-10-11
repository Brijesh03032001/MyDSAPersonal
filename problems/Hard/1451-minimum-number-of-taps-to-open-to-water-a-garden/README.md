# Minimum Number of Taps to Open to Water a Garden

**Difficulty:** Hard  
**URL:** [minimum-number-of-taps-to-open-to-water-a-garden](https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/)  
**Tags:** Array, Dynamic Programming, Greedy

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

There is a one-dimensional garden on the x-axis. The garden starts at the point 0 and ends at the point n. (i.e., the&nbsp;length of the garden is n).

There are n + 1 taps located at points [0, 1, ..., n] in the garden.

Given an integer n and an integer array ranges of length n + 1 where ranges[i] (0-indexed) means the i-th tap can water the area [i - ranges[i], i + ranges[i]] if it was open.

Return the minimum number of taps that should be open to water the whole garden, If the garden cannot be watered return -1.

&nbsp;
Example 1:


Input: n = 5, ranges = [3,4,1,1,0,0]
Output: 1
Explanati
