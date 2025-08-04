# Count of Matches in Tournament

**Difficulty:** Easy  
**URL:** [count-of-matches-in-tournament](https://leetcode.com/problems/count-of-matches-in-tournament/)  
**Tags:** Math, Simulation

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given an integer n, the number of teams in a tournament that has strange rules:


	If the current number of teams is even, each team gets paired with another team. A total of n / 2 matches are played, and n / 2 teams advance to the next round.
	If the current number of teams is odd, one team randomly advances in the tournament, and the rest gets paired. A total of (n - 1) / 2 matches are played, and (n - 1) / 2 + 1 teams advance to the next round.


Return the number of matches played in the tournament until a winner is decided.

&nbsp;
Example 1:


Input: n = 7
Output: 6
Explanation: 
