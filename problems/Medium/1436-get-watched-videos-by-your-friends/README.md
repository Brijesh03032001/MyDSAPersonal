# Get Watched Videos by Your Friends

**Difficulty:** Medium  
**URL:** [get-watched-videos-by-your-friends](https://leetcode.com/problems/get-watched-videos-by-your-friends/)  
**Tags:** Array, Hash Table, Breadth-First Search, Graph Theory, Sorting

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

There are n people, each person has a unique id between 0 and n-1. Given the arrays watchedVideos and friends, where watchedVideos[i] and friends[i] contain the list of watched videos and the list of friends respectively for the person with id = i.

Level 1 of videos are all watched videos by your&nbsp;friends, level 2 of videos are all watched videos by the friends of your&nbsp;friends and so on. In general, the level k of videos are all&nbsp;watched videos by people&nbsp;with the shortest path exactly equal&nbsp;to&nbsp;k with you. Given your&nbsp;id and the level of videos, return the list 
