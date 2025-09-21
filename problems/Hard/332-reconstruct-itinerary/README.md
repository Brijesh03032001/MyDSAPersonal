# Reconstruct Itinerary

**Difficulty:** Hard  
**URL:** [reconstruct-itinerary](https://leetcode.com/problems/reconstruct-itinerary/)  
**Tags:** Array, String, Depth-First Search, Graph Theory, Sorting, Heap (Priority Queue), Eulerian Circuit

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

You are given a list of airline tickets where tickets[i] = [fromi, toi] represent the departure and the arrival airports of one flight. Reconstruct the itinerary in order and return it.

All of the tickets belong to a man who departs from "JFK", thus, the itinerary must begin with "JFK". If there are multiple valid itineraries, you should return the itinerary that has the smallest lexical order when read as a single string.


	For example, the itinerary ["JFK", "LGA"] has a smaller lexical order than ["JFK", "LGB"].


You may assume all tickets form at least one valid itinerary. You must use a
