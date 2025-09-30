# Allow One Function Call

**Difficulty:** Easy  
**URL:** [allow-one-function-call](https://leetcode.com/problems/allow-one-function-call/)  
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

Given a function fn, return a new function that is identical to the original function except that it ensures&nbsp;fn&nbsp;is&nbsp;called at most once.


	The first time the returned function is called, it should return the same result as&nbsp;fn.
	Every subsequent time it is called, it should return&nbsp;undefined.


&nbsp;
Example 1:


Input: fn = (a,b,c) => (a + b + c), calls = [[1,2,3],[2,3,6]]
Output: [{"calls":1,"value":6}]
Explanation:
const onceFn = once(fn);
onceFn(1, 2, 3); // 6
onceFn(2, 3, 6); // undefined, fn was not called


Example 2:


Input: fn = (a,b,c) => (a * b * c), calls =
