# Determine if Two Strings Are Close

**Difficulty:** Medium  
**URL:** [determine-if-two-strings-are-close](https://leetcode.com/problems/determine-if-two-strings-are-close/)  
**Tags:** Hash Table, String, Sorting, Counting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Two strings are considered close if you can attain one from the other using the following operations:


	Operation 1: Swap any two existing characters.

	
		For example, abcde -> aecdb
	
	
	Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
	
		For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
	
	


You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

&nbsp
