# Seat Reservation Manager

**Difficulty:** Medium  
**URL:** [seat-reservation-manager](https://leetcode.com/problems/seat-reservation-manager/)  
**Tags:** Design, Heap (Priority Queue)

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Design a system that manages the reservation state of n seats that are numbered from 1 to n.

Implement the SeatManager class:


	SeatManager(int n) Initializes a SeatManager object that will manage n seats numbered from 1 to n. All seats are initially available.
	int reserve() Fetches the smallest-numbered unreserved seat, reserves it, and returns its number.
	void unreserve(int seatNumber) Unreserves the seat with the given seatNumber.


&nbsp;
Example 1:


Input
["SeatManager", "reserve", "reserve", "unreserve", "reserve", "reserve", "reserve", "reserve", "unreserve"]
[[5], [], [], [2], [],
