# Prefix and Suffix Search

**Difficulty:** Hard  
**URL:** [prefix-and-suffix-search](https://leetcode.com/problems/prefix-and-suffix-search/)  
**Tags:** Array, Hash Table, String, Design, Trie

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

Design a special dictionary that searches the words in it by a prefix and a suffix.

Implement the WordFilter class:


	WordFilter(string[] words) Initializes the object with the words in the dictionary.
	f(string pref, string suff) Returns the index of the word in the dictionary, which has the prefix pref and the suffix suff. If there is more than one valid index, return the largest of them. If there is no such word in the dictionary, return -1.


&nbsp;
Example 1:


Input
["WordFilter", "f"]
[[["apple"]], ["a", "e"]]
Output
[null, 0]
Explanation
WordFilter wordFilter = new WordFilter(["apple
