# Number of Music Playlists

**Difficulty:** Hard  
**URL:** [number-of-music-playlists](https://leetcode.com/problems/number-of-music-playlists/)  
**Tags:** Math, Dynamic Programming, Combinatorics

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Your music player contains n different songs. You want to listen to goal songs (not necessarily different) during your trip. To avoid boredom, you will create a playlist so that:


	Every song is played at least once.
	A song can only be played again only if k other songs have been played.


Given n, goal, and k, return the number of possible playlists that you can create. Since the answer can be very large, return it modulo 109 + 7.
&nbsp;
Example 1:


Input: n = 3, goal = 3, k = 1
Output: 6
Explanation: There are 6 possible playlists: [1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], an
