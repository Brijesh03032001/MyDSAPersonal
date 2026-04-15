# Find Lucky Integer in an Array

**Difficulty:** Easy  
**URL:** [https://leetcode.com/problems/find-lucky-integer-in-an-array/](https://leetcode.com/problems/find-lucky-integer-in-an-array/)  
**Tags:** Array, Hash Table, Counting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

Return the largest lucky integer in the array. If there is no lucky integer return -1.

 

Example 1:

Input: arr = [2,2,3,4]
Output: 2
Explanation: The only lucky number in the array is 2 because frequency[2] == 2.

Example 2:

Input: arr = [1,2,2,3,3,3]
Output: 3
Explanation: 1, 2 and 3 are all lucky numbers, return the largest of them.

Example 3:

Input: arr = [2,2,2,3,3]
Output: -1
Explanation: There are no lucky numbers in the array.

 

Constraints:

	
1 <= arr.length <= 500

	
1 <= arr[i] <= 500
