# 2Sum With Pair - Time Complexity Analysis

**File:** `2SumWithPair.cpp`

## Problem Overview
Given an array and a target sum, find all pairs of indices where the sum of elements equals the target.

---

## Time Complexity Breakdown

Let:
- $N$ = number of elements in the array (`arr.size()`)
- $M$ = total number of pairs in the final answer (`pc.size()`)

### **Overall Complexity: $O(N \log N + M)$**

In the worst case, $M$ can be $O(N^2)$, making the overall **worst-case complexity $O(N^2)$**.

---

## Step-by-Step Analysis

### 1. **Sorting: $O(N \log N)$**

The first operation in the `solve` function is:
```cpp
sort(arr.begin(), arr.end());
```

**Complexity:** $O(N \log N)$
- Uses an efficient sorting algorithm (typically introsort in `std::sort`)

---

### 2. **Two-Pointer Traversal: $O(N + M)$**

The `ans` function operates on the sorted array using two pointers.

#### **a) Pointer Scanning: $O(N)$**

The main loop structure:
```cpp
while (p1 < p2)
```

**Key observations:**
- `p1` only moves forward (increases)
- `p2` only moves backward (decreases)
- In `if` and `else if` blocks: pointers move one step at a time
- In `else` block: helper while loops scan to find duplicate boundaries
- After processing duplicate blocks, pointers jump past those blocks
- **Each element is visited only a constant number of times**

**Total pointer movement complexity:** $O(N)$

#### **b) Pair Generation: $O(M)$**

Inside the `else` block, nested loops generate pairs:

**Case 1: `val1 == val2` (all duplicates are same)**
```cpp
for (int i = p1; i <= p2; i++)
    for (int j = i + 1; j <= p2; j++)
        pc.push_back({i, j});
```
- Runs $O(k^2)$ where $k$ is the duplicate block size
- Generates $O(k^2)$ pairs

**Case 2: `val1 != val2` (different duplicate blocks)**
```cpp
for (int i = p1; i < p1_end; i++)
    for (int j = p2_start + 1; j <= p2; j++)
        pc.push_back({i, j});
```
- Runs $O(k_1 \times k_2)$ where $k_1$ and $k_2$ are block sizes
- Generates $k_1 \times k_2$ pairs

**Important:** The time spent in nested loops is directly proportional to the number of pairs added, which is $M$.

**Total pair generation complexity:** $O(M)$

---

### **Combined Two-Pointer Complexity**

$$\text{ans function} = O(N) + O(M) = O(N + M)$$

---

## Overall Complexity

$$\text{Total Time} = \text{(Sorting)} + \text{(Two-Pointer Traversal)}$$

$$\text{Total Time} = O(N \log N) + O(N + M)$$

$$\boxed{O(N \log N + M)}$$

---

## Worst-Case Analysis

### **Why is the worst case $O(N^2)$?**

**Example scenario:**
```cpp
arr = [2, 2, 2, 2, 2]  // N = 5
target = 4
```

**What happens:**
1. All elements are the same
2. Target is twice that element
3. Code enters `else` block → `if (val1 == val2)` case
4. Nested loop generates all pairs:
   - (0,1), (0,2), (0,3), (0,4)
   - (1,2), (1,3), (1,4)
   - (2,3), (2,4)
   - (3,4)

**Number of pairs:** $\binom{N}{2} = \frac{N(N-1)}{2} = O(N^2)$

In this case, $M = O(N^2)$

**Total complexity becomes:**
$$O(N \log N + N^2)$$

Since $O(N^2)$ dominates $O(N \log N)$:

$$\boxed{\text{Worst-case: } O(N^2)}$$

---

## Space Complexity

- **Auxiliary space:** $O(M)$ for storing the result pairs
- **Worst case:** $O(N^2)$ when all pairs are valid

---

## Key Insights

1. **Best case:** $O(N \log N)$ when no pairs exist ($M = 0$)
2. **Average case:** $O(N \log N + M)$ where $M$ depends on input
3. **Worst case:** $O(N^2)$ when all elements form valid pairs
4. The algorithm is **output-sensitive**: performance depends on number of valid pairs
5. Two-pointer approach is optimal for finding pairs in sorted array
