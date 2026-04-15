# Number of Substrings With Only 1s

**Difficulty:** Medium  
**URL:** [https://leetcode.com/problems/number-of-substrings-with-only-1s/](https://leetcode.com/problems/number-of-substrings-with-only-1s/)  
**Tags:** Math, String

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given a binary string s, return the number of substrings with all characters 1's. Since the answer may be too large, return it modulo 109 + 7.

 

Example 1:

Input: s = "0110111"
Output: 9
Explanation: There are 9 substring in total with only 1's characters.
"1" -> 5 times.
"11" -> 3 times.
"111" -> 1 time.

Example 2:

Input: s = "101"
Output: 2
Explanation: Substring "1" is shown 2 times in s.

Example 3:

Input: s = "111111"
Output: 21
Explanation: Each substring contains only 1's characters.

 

Constraints:

	
1 <= s.length <= 105

	
s[i] is either '0' or '1'.
