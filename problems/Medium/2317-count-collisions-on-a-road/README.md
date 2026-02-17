# Count Collisions on a Road

**Difficulty:** Medium  
**URL:** [count-collisions-on-a-road](https://leetcode.com/problems/count-collisions-on-a-road/)  
**Tags:** String, Stack, Simulation

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

There are n cars on an infinitely long road. The cars are numbered from 0 to n - 1 from left to right and each car is present at a unique point.

You are given a 0-indexed string directions of length n. directions[i] can be either 'L', 'R', or 'S' denoting whether the ith car is moving towards the left, towards the right, or staying at its current point respectively. Each moving car has the same speed.

The number of collisions can be calculated as follows:


	When two cars moving in opposite directions collide with each other, the number of collisions increases by 2.
	When a moving car collid
