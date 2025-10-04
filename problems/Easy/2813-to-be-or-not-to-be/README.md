# To Be Or Not To Be

**Difficulty:** Easy  
**URL:** [to-be-or-not-to-be](https://leetcode.com/problems/to-be-or-not-to-be/)  
**Tags:** —

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Write a function&nbsp;expect that helps developers test their code. It should take in any value&nbsp;val&nbsp;and return an object with the following two functions.


	toBe(val)&nbsp;accepts another value and returns&nbsp;true&nbsp;if the two values&nbsp;===&nbsp;each other. If they are not equal, it should throw an error&nbsp;"Not Equal".
	notToBe(val)&nbsp;accepts another value and returns&nbsp;true&nbsp;if the two values&nbsp;!==&nbsp;each other. If they are equal, it should throw an error&nbsp;"Equal".


&nbsp;
Example 1:


Input: func = () => expect(5).toBe(5)
Output: {"value": true}
Expl
