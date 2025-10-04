# Counter II

**Difficulty:** Easy  
**URL:** [counter-ii](https://leetcode.com/problems/counter-ii/)  
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

Write a function&nbsp;createCounter. It should accept an initial integer&nbsp;init. It should return an object with three functions.

The three functions are:


	increment()&nbsp;increases&nbsp;the current value by 1 and then returns it.
	decrement()&nbsp;reduces the current value by 1 and then returns it.
	reset()&nbsp;sets the current value to&nbsp;init&nbsp;and then returns it.


&nbsp;
Example 1:


Input: init = 5, calls = ["increment","reset","decrement"]
Output: [6,5,4]
Explanation:
const counter = createCounter(5);
counter.increment(); // 6
counter.reset(); // 5
counter.decrement(); // 
