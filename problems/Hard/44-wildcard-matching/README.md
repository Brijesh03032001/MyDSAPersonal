# Wildcard Matching

**Difficulty:** Hard  
**URL:** [wildcard-matching](https://leetcode.com/problems/wildcard-matching/)  
**Tags:** String, Dynamic Programming, Greedy, Recursion

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:


	'?' Matches any single character.
	'*' Matches any sequence of characters (including the empty sequence).


The matching should cover the entire input string (not partial).

&nbsp;
Example 1:


Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".


Example 2:


Input: s = "aa", p = "*"
Output: true
Explanation:&nbsp;'*' matches any sequence.


Example 3:


Input: s = "cb", p = "?a"
Output: false
Explanation:&nbsp;'?' matches 'c', but 
