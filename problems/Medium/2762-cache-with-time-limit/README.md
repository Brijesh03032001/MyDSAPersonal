# Cache With Time Limit

**Difficulty:** Medium  
**URL:** [cache-with-time-limit](https://leetcode.com/problems/cache-with-time-limit/)  
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

Write a class that allows getting and setting&nbsp;key-value pairs, however a&nbsp;time until expiration&nbsp;is associated with each key.

The class has three public methods:

set(key, value, duration):&nbsp;accepts an integer&nbsp;key, an&nbsp;integer&nbsp;value, and a duration in milliseconds. Once the&nbsp;duration&nbsp;has elapsed, the key should be inaccessible. The method should return&nbsp;true&nbsp;if the same&nbsp;un-expired key already exists and false otherwise. Both the value and duration should be overwritten if the key already exists.

get(key): if an un-expired key exists, it s
