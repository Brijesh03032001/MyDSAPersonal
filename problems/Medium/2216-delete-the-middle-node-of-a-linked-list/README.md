# Delete the Middle Node of a Linked List

**Difficulty:** Medium  
**URL:** [delete-the-middle-node-of-a-linked-list](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)  
**Tags:** Linked List, Two Pointers

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the &lfloor;n / 2&rfloor;th node from the start using 0-based indexing, where &lfloor;x&rfloor; denotes the largest integer less than or equal to x.


	For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.


&nbsp;
Example 1:


Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]
Explanation:
The above figure represents the given linked list. The indices of the nodes are written below.
Since n = 7, node 3 with
