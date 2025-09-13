# Number of Ways to Form a Target String Given a Dictionary

**Difficulty:** Hard  
**URL:** [number-of-ways-to-form-a-target-string-given-a-dictionary](https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/)  
**Tags:** Array, String, Dynamic Programming

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a list of strings of the same length words and a string target.

Your task is to form target using the given words under the following rules:


	target should be formed from left to right.
	To form the ith character (0-indexed) of target, you can choose the kth character of the jth string in words if target[i] = words[j][k].
	Once you use the kth character of the jth string of words, you can no longer use the xth character of any string in words where x <= k. In other words, all characters to the left of or at index k become unusuable for every string.
	Repeat the process until y
