# Number of Students Unable to Eat Lunch

**Difficulty:** Easy  
**URL:** [number-of-students-unable-to-eat-lunch](https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/)  
**Tags:** Array, Stack, Queue, Simulation

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

The school cafeteria offers circular and square sandwiches at lunch break, referred to by numbers 0 and 1 respectively. All students stand in a queue. Each student either prefers square or circular sandwiches.

The number of sandwiches in the cafeteria is equal to the number of students. The sandwiches are placed in a stack. At each step:


	If the student at the front of the queue prefers the sandwich on the top of the stack, they will take it and leave the queue.
	Otherwise, they will leave it and go to the queue's end.


This continues until none of the queue students want to take the top s
