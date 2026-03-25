# Validate Binary Search Tree

**Difficulty:** Medium  
**URL:** [validate-binary-search-tree](https://leetcode.com/problems/validate-binary-search-tree/)  
**Tags:** Tree, Depth-First Search, Binary Search Tree, Binary Tree

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:


	The left subtree of a node contains only nodes with keys&nbsp;strictly less than the node's key.
	The right subtree of a node contains only nodes with keys strictly greater than the node's key.
	Both the left and right subtrees must also be binary search trees.


&nbsp;
Example 1:


Input: root = [2,1,3]
Output: true


Example 2:


Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.


&nbsp;
Constrai
