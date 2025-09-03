# Find in Mountain Array

**Difficulty:** Hard  
**URL:** [find-in-mountain-array](https://leetcode.com/problems/find-in-mountain-array/)  
**Tags:** Array, Binary Search, Interactive

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

(This problem is an interactive problem.)

You may recall that an array arr is a mountain array if and only if:


	arr.length >= 3
	There exists some i with 0 < i < arr.length - 1 such that:
	
		arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
		arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
	
	


Given a mountain array mountainArr, return the minimum index such that mountainArr.get(index) == target. If such an index does not exist, return -1.

You cannot access the mountain array directly. You may only access the array using a MountainArray interface:


	MountainArray.get(k) returns the element o
