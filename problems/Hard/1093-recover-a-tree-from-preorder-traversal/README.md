# Recover a Tree From Preorder Traversal

**Difficulty:** Hard  
**URL:** [recover-a-tree-from-preorder-traversal](https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/)  
**Tags:** String, Tree, Depth-First Search, Binary Tree

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

We run a&nbsp;preorder&nbsp;depth-first search (DFS) on the root of a binary tree.

At each node in this traversal, we output D dashes (where D is the depth of this node), then we output the value of this node.&nbsp; If the depth of a node is D, the depth of its immediate child is D + 1.&nbsp; The depth of the root node is 0.

If a node has only one child, that child is guaranteed to be the left child.

Given the output traversal of this traversal, recover the tree and return its root.

&nbsp;
Example 1:


Input: traversal = "1-2--3--4-5--6--7"
Output: [1,2,5,3,4,6,7]


Example 2:


Input: tra
