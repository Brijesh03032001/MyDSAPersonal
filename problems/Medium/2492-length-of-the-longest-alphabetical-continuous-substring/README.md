# Length of the Longest Alphabetical Continuous Substring

**Difficulty:** Medium  
**URL:** [https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/](https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/)  
**Tags:** String

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

An alphabetical continuous string is a string consisting of consecutive letters in the alphabet. In other words, it is any substring of the string "abcdefghijklmnopqrstuvwxyz".

	
For example, "abc" is an alphabetical continuous string, while "acb" and "za" are not.

Given a string s consisting of lowercase letters only, return the length of the longest alphabetical continuous substring.

 

Example 1:

Input: s = "abacaba"
Output: 2
Explanation: There are 4 distinct continuous substrings: "a", "b", "c" and "ab".
"ab" is the longest continuous substring.

Example 2:

Input: s = "abcde"
Output: 5
Explanation: "abcde" is the longest continuous substring.

 

Constraints:

	
1 <= s.length <= 105

	
s consists of only English lowercase letters.
