# Check If Two String Arrays are Equivalent

**Difficulty:** Easy  
**URL:** [check-if-two-string-arrays-are-equivalent](https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/)  
**Tags:** Array, String

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

&nbsp;
Example 1:


Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.

Example 2:


Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
Output: false


Example 3:


Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
Output:
