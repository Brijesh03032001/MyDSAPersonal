# Validate Binary Tree Nodes

**Difficulty:** Medium  
**URL:** [validate-binary-tree-nodes](https://leetcode.com/problems/validate-binary-tree-nodes/)  
**Tags:** Tree, Depth-First Search, Breadth-First Search, Union-Find, Graph Theory, Binary Tree

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You have n binary tree nodes numbered from 0 to n - 1 where node i has two children leftChild[i] and rightChild[i], return true if and only if all the given nodes form exactly one valid binary tree.

If node i has no left child then leftChild[i] will equal -1, similarly for the right child.

Note that the nodes have no values and that we only use the node numbers in this problem.

&nbsp;
Example 1:


Input: n = 4, leftChild = [1,-1,3,-1], rightChild = [2,-1,-1,-1]
Output: true


Example 2:


Input: n = 4, leftChild = [1,-1,3,-1], rightChild = [2,3,-1,-1]
Output: false


Example 3:


Input: n =
