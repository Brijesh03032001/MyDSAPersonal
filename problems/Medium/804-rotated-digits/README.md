# Rotated Digits

**Difficulty:** Medium  
**URL:** [rotated-digits](https://leetcode.com/problems/rotated-digits/)  
**Tags:** Math, Dynamic Programming

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

An integer x is a good if after rotating each digit individually by 180 degrees, we get a valid number that is different from x. Each digit must be rotated - we cannot choose to leave it alone.

A number is valid if each digit remains a digit after rotation. For example:


	0, 1, and 8 rotate to themselves,
	2 and 5 rotate to each other (in this case they are rotated in a different direction, in other words, 2 or 5 gets mirrored),
	6 and 9 rotate to each other, and
	the rest of the numbers do not rotate to any other number and become invalid.


Given an integer n, return the number of good int
