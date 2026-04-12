# 2 Keys Keyboard

**Difficulty:** Medium  
**URL:** [2-keys-keyboard](https://leetcode.com/problems/2-keys-keyboard/)  
**Tags:** Math, Dynamic Programming

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:


	Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
	Paste: You can paste the characters which are copied last time.


Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen.

&nbsp;
Example 1:


Input: n = 3
Output: 3
Explanation: Initially, we have one character 'A'.
In step 1, we use Copy All operation.
In step 2, we use Paste operation to get 'AA'.
In step 
