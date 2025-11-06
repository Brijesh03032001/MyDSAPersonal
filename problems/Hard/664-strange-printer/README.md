# Strange Printer

**Difficulty:** Hard  
**URL:** [strange-printer](https://leetcode.com/problems/strange-printer/)  
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

There is a strange printer with the following two special properties:


	The printer can only print a sequence of the same character each time.
	At each turn, the printer can print new characters starting from and ending at any place and will cover the original existing characters.


Given a string s, return the minimum number of turns the printer needed to print it.

&nbsp;
Example 1:


Input: s = "aaabbb"
Output: 2
Explanation: Print "aaa" first and then print "bbb".


Example 2:


Input: s = "aba"
Output: 2
Explanation: Print "aaa" first and then print "b" from the second place of the strin
