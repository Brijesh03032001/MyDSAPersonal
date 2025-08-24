# Sort Integers by The Number of 1 Bits

**Difficulty:** Easy  
**URL:** [sort-integers-by-the-number-of-1-bits](https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/)  
**Tags:** Array, Bit Manipulation, Sorting, Counting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an integer array arr. Sort the integers in the array&nbsp;in ascending order by the number of 1's&nbsp;in their binary representation and in case of two or more integers have the same number of 1's you have to sort them in ascending order.

Return the array after sorting it.

&nbsp;
Example 1:


Input: arr = [0,1,2,3,4,5,6,7,8]
Output: [0,1,2,4,8,3,5,6,7]
Explantion: [0] is the only integer with 0 bits.
[1,2,4,8] all have 1 bit.
[3,5,6] have 2 bits.
[7] has 3 bits.
The sorted array by bits is [0,1,2,4,8,3,5,6,7]


Example 2:


Input: arr = [1024,512,256,128,64,32,16,8,4,2,1]
Outp
