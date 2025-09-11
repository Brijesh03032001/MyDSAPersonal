# Decoded String at Index

**Difficulty:** Medium  
**URL:** [decoded-string-at-index](https://leetcode.com/problems/decoded-string-at-index/)  
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

You are given an encoded string s. To decode the string to a tape, the encoded string is read one character at a time and the following steps are taken:


	If the character read is a letter, that letter is written onto the tape.
	If the character read is a digit d, the entire current tape is repeatedly written d - 1 more times in total.


Given an integer k, return the kth letter (1-indexed) in the decoded string.

&nbsp;
Example 1:


Input: s = "leet2code3", k = 10
Output: "o"
Explanation: The decoded string is "leetleetcodeleetleetcodeleetleetcode".
The 10th letter in the string is "o".


Ex
