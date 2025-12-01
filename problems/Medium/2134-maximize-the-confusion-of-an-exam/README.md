# Maximize the Confusion of an Exam

**Difficulty:** Medium  
**URL:** [maximize-the-confusion-of-an-exam](https://leetcode.com/problems/maximize-the-confusion-of-an-exam/)  
**Tags:** String, Binary Search, Sliding Window, Prefix Sum

---

## My Notes

<!-- Add your personal notes here -->

## Time Complexity

<!-- e.g. O(n log n) -->

## Space Complexity

<!-- e.g. O(n) -->

---

## Problem Statement

A teacher is writing a test with n true/false questions, with 'T' denoting true and 'F' denoting false. He wants to confuse the students by maximizing the number of consecutive questions with the same answer (multiple trues or multiple falses in a row).

You are given a string answerKey, where answerKey[i] is the original answer to the ith question. In addition, you are given an integer k, the maximum number of times you may perform the following operation:


	Change the answer key for any question to 'T' or 'F' (i.e., set answerKey[i] to 'T' or 'F').


Return the maximum number of consecutive
