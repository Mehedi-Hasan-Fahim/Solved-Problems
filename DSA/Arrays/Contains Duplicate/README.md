# 217. Contains Duplicate

## 📝 Problem Description

Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

### Examples

| Input | Output | Explanation |
| :--- | :--- | :--- |
| `[1,2,3,1]` | `true` | The element `1` occurs at indices 0 and 3. |
| `[1,2,3,4]` | `false` | All elements are distinct. |
| `[1,1,1,3,3,4,3,2,4,2]` | `true` | Multiple duplicates exist. |

### Constraints

-   `1 <= nums.length <= 10^5`
-   `-10^9 <= nums[i] <= 10^9`

---

## 💡 Approach: Hash Set

The most efficient way to solve this problem is by using a **Hash Set** (`unordered_set` in C++). A set only stores unique values and provides O(1) average time complexity for lookups and insertions.

### Algorithm

1.  Initialize an empty `unordered_set` called `seen`.
2.  Iterate through each number in the input array:
    -   If the number already exists in `seen`, a duplicate is found → return `true`.
    -   Otherwise, insert the number into `seen`.
3.  If the loop completes without finding any duplicates → return `false`.

### Complexity Analysis

| Metric | Complexity | Notes |
| :--- | :--- | :--- |
| **Time** | O(n) | Single pass through the array; set operations are O(1) avg. |
| **Space** | O(n) | Worst case: all elements are distinct, set stores n elements. |

---

## 🔗 References

-   [LeetCode Problem #217](https://leetcode.com/problems/contains-duplicate/)
