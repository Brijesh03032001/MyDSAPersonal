# Function Composition

**Difficulty:** Easy  
**URL:** [function-composition](https://leetcode.com/problems/function-composition/)  
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

Given an array of functions&nbsp;[f1, f2, f3,&nbsp;..., fn], return&nbsp;a new function&nbsp;fn&nbsp;that is the function&nbsp;composition of the array of functions.

The&nbsp;function&nbsp;composition&nbsp;of&nbsp;[f(x), g(x), h(x)]&nbsp;is&nbsp;fn(x) = f(g(h(x))).

The&nbsp;function&nbsp;composition&nbsp;of an empty list of functions is the&nbsp;identity function&nbsp;f(x) = x.

You may assume each&nbsp;function&nbsp;in the array accepts one integer as input&nbsp;and returns one integer as output.

&nbsp;
Example 1:


Input: functions = [x => x + 1, x => x * x, x => 2 * x], x = 4
Output: 65

