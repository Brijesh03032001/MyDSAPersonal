# Timeout Cancellation

**Difficulty:** Easy  
**URL:** [timeout-cancellation](https://leetcode.com/problems/timeout-cancellation/)  
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

Given a function fn, an array of&nbsp;arguments&nbsp;args, and a timeout&nbsp;t&nbsp;in milliseconds, return a cancel function cancelFn.

After a delay of cancelTimeMs, the returned cancel function cancelFn will be invoked.


setTimeout(cancelFn, cancelTimeMs)


Initially, the execution of the function fn should be delayed by t milliseconds.

If, before the delay of t milliseconds, the function cancelFn is invoked, it should cancel the delayed execution of fn. Otherwise, if cancelFn is not invoked within the specified delay t, fn should be executed with the provided args as arguments.

&nbsp;

