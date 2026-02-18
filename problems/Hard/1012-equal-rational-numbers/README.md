# Equal Rational Numbers

**Difficulty:** Hard  
**URL:** [equal-rational-numbers](https://leetcode.com/problems/equal-rational-numbers/)  
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

Given two strings s and t, each of which represents a non-negative rational number, return true if and only if they represent the same number. The strings may use parentheses to denote the repeating part of the rational number.

A rational number can be represented using up to three parts: <IntegerPart>, <NonRepeatingPart>, and a <RepeatingPart>. The number will be represented in one of the following three ways:


	<IntegerPart>

	
		For example, 12, 0, and 123.
	
	
	<IntegerPart><.><NonRepeatingPart>
	
		For example, 0.5, 1., 2.12, and 123.0001.
	
	
	<IntegerPart><.><NonRepeatingPart><(><Repe
