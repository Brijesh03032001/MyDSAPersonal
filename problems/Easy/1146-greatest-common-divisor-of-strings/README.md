# Greatest Common Divisor of Strings

**Difficulty:** Easy  
**URL:** [greatest-common-divisor-of-strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/)  
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

For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

&nbsp;
Example 1:


Input: str1 = "ABCABC", str2 = "ABC"

Output: "ABC"


Example 2:


Input: str1 = "ABABAB", str2 = "ABAB"

Output: "AB"


Example 3:


Input: str1 = "LEET", str2 = "CODE"

Output: ""


Example 4:


Input: str1 = "AAAAAB", str2 = "AAA"

Output: ""​​​​​​​


&nbsp;
Constraints:


	1 <= str1.length, str2.length <= 1000
	str1 and str2 
