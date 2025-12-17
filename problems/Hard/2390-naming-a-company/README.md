# Naming a Company

**Difficulty:** Hard  
**URL:** [naming-a-company](https://leetcode.com/problems/naming-a-company/)  
**Tags:** Array, Hash Table, String, Bit Manipulation, Enumeration

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an array of strings ideas that represents a list of names to be used in the process of naming a company. The process of naming a company is as follows:


	Choose 2 distinct names from ideas, call them ideaA and ideaB.
	Swap the first letters of ideaA and ideaB with each other.
	If both of the new names are not found in the original ideas, then the name ideaA ideaB (the concatenation of ideaA and ideaB, separated by a space) is a valid company name.
	Otherwise, it is not a valid name.


Return the number of distinct valid names for the company.

&nbsp;
Example 1:


Input: ideas = 
