# Construct Binary Tree from Inorder and Postorder Traversal

**Difficulty:** Medium  
**URL:** [construct-binary-tree-from-inorder-and-postorder-traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)  
**Tags:** Array, Hash Table, Divide and Conquer, Tree, Binary Tree

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree.

&nbsp;
Example 1:


Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]


Example 2:


Input: inorder = [-1], postorder = [-1]
Output: [-1]


&nbsp;
Constraints:


	1 <= inorder.length <= 3000
	postorder.length == inorder.length
	-3000 <= inorder[i], postorder[i] <= 3000
	inorder and postorder consist of unique values.
	Each value of postorder also appears in
