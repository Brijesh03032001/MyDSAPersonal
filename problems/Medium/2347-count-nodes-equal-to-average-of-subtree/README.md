# Count Nodes Equal to Average of Subtree

**Difficulty:** Medium  
**URL:** [count-nodes-equal-to-average-of-subtree](https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/)  
**Tags:** Tree, Depth-First Search, Binary Tree

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Given the root of a binary tree, return the number of nodes where the value of the node is equal to the average of the values in its subtree.

Note:


	The average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.
	A subtree of root is a tree consisting of root and all of its descendants.


&nbsp;
Example 1:


Input: root = [4,8,5,0,1,null,6]
Output: 5
Explanation: 
For the node with value 4: The average of its subtree is (4 + 8 + 5 + 0 + 1 + 6) / 6 = 24 / 6 = 4.
For the node with value 5: The average of its subtree is (5 + 6) / 2 = 11 / 2 = 5.
Fo
