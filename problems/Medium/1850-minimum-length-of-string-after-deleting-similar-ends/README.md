# Minimum Length of String After Deleting Similar Ends

**Difficulty:** Medium  
**URL:** [minimum-length-of-string-after-deleting-similar-ends](https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/)  
**Tags:** Two Pointers, String

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given a string s consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:


	Pick a non-empty prefix from the string s where all the characters in the prefix are equal.
	Pick a non-empty suffix from the string s where all the characters in this suffix are equal.
	The prefix and the suffix should not intersect at any index.
	The characters from the prefix and suffix must be the same.
	Delete both the prefix and the suffix.


Return the minimum length of s after performing the above operation any number of times (possibly 
