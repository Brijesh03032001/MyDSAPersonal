# String to Integer (atoi)

**Difficulty:** Medium  
**URL:** [string-to-integer-atoi](https://leetcode.com/problems/string-to-integer-atoi/)  
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

Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

The algorithm for myAtoi(string s) is as follows:


	Whitespace: Ignore any leading whitespace (" ").
	Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity if neither present.
	Conversion: Read the integer by skipping leading zeros&nbsp;until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
	Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round 
