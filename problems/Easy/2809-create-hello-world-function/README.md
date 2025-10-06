# Create Hello World Function

**Difficulty:** Easy  
**URL:** [create-hello-world-function](https://leetcode.com/problems/create-hello-world-function/)  
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

Write a function&nbsp;createHelloWorld.&nbsp;It should return a new function that always returns&nbsp;"Hello World".
&nbsp;
Example 1:


Input: args = []
Output: "Hello World"
Explanation:
const f = createHelloWorld();
f(); // "Hello World"

The function returned by createHelloWorld should always return "Hello World".


Example 2:


Input: args = [{},null,42]
Output: "Hello World"
Explanation:
const f = createHelloWorld();
f({}, null, 42); // "Hello World"

Any arguments could be passed to the function but it should still always return "Hello World".


&nbsp;
Constraints:


	0 <= args.length <
