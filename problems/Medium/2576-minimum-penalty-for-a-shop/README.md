# Minimum Penalty for a Shop

**Difficulty:** Medium  
**URL:** [minimum-penalty-for-a-shop](https://leetcode.com/problems/minimum-penalty-for-a-shop/)  
**Tags:** String, Prefix Sum

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given the customer visit log of a shop represented by a 0-indexed string customers consisting only of characters 'N' and 'Y':


	if the ith character is 'Y', it means that customers come at the ith hour
	whereas 'N' indicates that no customers come at the ith hour.


If the shop closes at the jth hour (0 <= j <= n), the penalty is calculated as follows:


	For every hour when the shop is open and no customers come, the penalty increases by 1.
	For every hour when the shop is closed and customers come, the penalty increases by 1.


Return the earliest hour at which the shop must be clos
