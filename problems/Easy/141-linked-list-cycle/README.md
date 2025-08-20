# Linked List Cycle

**Difficulty:** Easy  
**URL:** [linked-list-cycle](https://leetcode.com/problems/linked-list-cycle/)  
**Tags:** Hash Table, Linked List, Two Pointers

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the&nbsp;next&nbsp;pointer. Internally, pos&nbsp;is used to denote the index of the node that&nbsp;tail's&nbsp;next&nbsp;pointer is connected to.&nbsp;Note that&nbsp;pos&nbsp;is not passed as a parameter.

Return&nbsp;true if there is a cycle in the linked list. Otherwise, return false.

&nbsp;
Example 1:


Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the
