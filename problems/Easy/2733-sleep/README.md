# Sleep

**Difficulty:** Easy  
**URL:** [sleep](https://leetcode.com/problems/sleep/)  
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

Given&nbsp;a positive integer millis, write an asynchronous function that sleeps for millis&nbsp;milliseconds. It can resolve any value.

Note that minor deviation from millis in the actual sleep duration is acceptable.

&nbsp;
Example 1:


Input: millis = 100
Output: 100
Explanation: It should return a promise that resolves after 100ms.
let t = Date.now();
sleep(100).then(() => {
  console.log(Date.now() - t); // 100
});


Example 2:


Input: millis = 200
Output: 200
Explanation: It should return a promise that resolves after 200ms.


&nbsp;
Constraints:


	1 <= millis <= 1000
