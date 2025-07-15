# Score of Parentheses

**Difficulty:** Medium  
**URL:** [https://leetcode.com/problems/score-of-parentheses/](https://leetcode.com/problems/score-of-parentheses/)  
**Tags:** String, Stack

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given a balanced parentheses string s, return the score of the string.

The score of a balanced parentheses string is based on the following rule:

	
"()" has score 1.

	
AB has score A + B, where A and B are balanced parentheses strings.

	
(A) has score 2 * A, where A is a balanced parentheses string.

 

Example 1:

Input: s = "()"
Output: 1

Example 2:

Input: s = "(())"
Output: 2

Example 3:

Input: s = "()()"
Output: 2

 

Constraints:

	
2 <= s.length <= 50

	
s consists of only '(' and ')'.

	
s is a balanced parentheses string.
