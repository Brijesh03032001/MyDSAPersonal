# Smallest Sufficient Team

**Difficulty:** Hard  
**URL:** [smallest-sufficient-team](https://leetcode.com/problems/smallest-sufficient-team/)  
**Tags:** Array, Dynamic Programming, Bit Manipulation, Bitmask

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

In a project, you have a list of required skills req_skills, and a list of people. The ith person people[i] contains a list of skills that the person has.

Consider a sufficient team: a set of people such that for every required skill in req_skills, there is at least one person in the team who has that skill. We can represent these teams by the index of each person.


	For example, team = [0, 1, 3] represents the people with skills people[0], people[1], and people[3].


Return any sufficient team of the smallest possible size, represented by the index of each person. You may return the answer 
