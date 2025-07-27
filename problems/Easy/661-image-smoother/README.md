# Image Smoother

**Difficulty:** Easy  
**URL:** [image-smoother](https://leetcode.com/problems/image-smoother/)  
**Tags:** Array, Matrix

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

An image smoother is a filter of the size 3 x 3 that can be applied to each cell of an image by rounding down the average of the cell and the eight surrounding cells (i.e., the average of the nine cells in the blue smoother). If one or more of the surrounding cells of a cell is not present, we do not consider it in the average (i.e., the average of the four cells in the red smoother).

Given an m x n integer matrix img representing the grayscale of an image, return the image after applying the smoother on each cell of it.

&nbsp;
Example 1:


Input: img = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[0,
