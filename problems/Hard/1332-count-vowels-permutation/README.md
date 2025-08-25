# Count Vowels Permutation

**Difficulty:** Hard  
**URL:** [count-vowels-permutation](https://leetcode.com/problems/count-vowels-permutation/)  
**Tags:** Dynamic Programming

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an integer n, your task is to count how many strings of length n can be formed under the following rules:


	Each character is a lower case vowel&nbsp;('a', 'e', 'i', 'o', 'u')
	Each vowel&nbsp;'a' may only be followed by an 'e'.
	Each vowel&nbsp;'e' may only be followed by an 'a'&nbsp;or an 'i'.
	Each vowel&nbsp;'i' may not be followed by another 'i'.
	Each vowel&nbsp;'o' may only be followed by an 'i' or a&nbsp;'u'.
	Each vowel&nbsp;'u' may only be followed by an 'a'.


Since the answer&nbsp;may be too large,&nbsp;return it modulo&nbsp;10^9 + 7.

&nbsp;
Example 1:


Input: n = 1
Output
