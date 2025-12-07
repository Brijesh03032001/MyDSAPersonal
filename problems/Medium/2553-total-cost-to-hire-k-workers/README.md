# Total Cost to Hire K Workers

**Difficulty:** Medium  
**URL:** [total-cost-to-hire-k-workers](https://leetcode.com/problems/total-cost-to-hire-k-workers/)  
**Tags:** Array, Two Pointers, Heap (Priority Queue), Simulation

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a 0-indexed integer array costs where costs[i] is the cost of hiring the ith worker.

You are also given two integers k and candidates. We want to hire exactly k workers according to the following rules:


	You will run k sessions and hire exactly one worker in each session.
	In each hiring session, choose the worker with the lowest cost from either the first candidates workers or the last candidates workers. Break the tie by the smallest index.
	
		For example, if costs = [3,2,7,7,1,2] and candidates = 2, then in the first hiring session, we will choose the 4th worker because th
