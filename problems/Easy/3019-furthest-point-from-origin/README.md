# Furthest Point From Origin

**Difficulty:** Easy  
**URL:** [furthest-point-from-origin](https://leetcode.com/problems/furthest-point-from-origin/)  
**Tags:** String, Counting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a string moves of length n consisting only of characters 'L', 'R', and '_'. The string represents your movement on a number line starting from the origin 0.

In the ith move, you can choose one of the following directions:


	move to the left if moves[i] = 'L' or moves[i] = '_'
	move to the right if moves[i] = 'R' or moves[i] = '_'


Return the distance from the origin of the furthest point you can get to after n moves.

&nbsp;
Example 1:


Input: moves = "L_RL__R"
Output: 3
Explanation: The furthest point we can reach from the origin 0 is point -3 through the following sequence 
