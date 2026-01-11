# Problem 2: House Robber

## 🔗 LeetCode Link
  https://leetcode.com/problems/house-robber/

## 🧩 Problem Summary
    
 Given an integer array `nums` representing the amount of money in each house, determine the maximum amount of money you can rob without robbing two adjacent houses.



## 💡 Approach
1. **Brute Force Approach:**
   
    At each house, we have two choices:
    - Rob the current house and move to `index + 2`
    - Skip the current house and move to `index + 1`

    We take the maximum of both choices.

    Let  
    `f(ind)` = maximum money that can be robbed starting from index `ind`
  
   *Base cases:*

    - If ind >= n → return 0

2. **Dynamic Programming**:
  
   To avoid recalculating overlapping subproblems, we store results in a DP array.

  `dp[ind]` stores the maximum money that can be robbed starting from index `ind`.

   If `dp[ind]` is already computed, return it directly.



## ⏱ Time Complexity
O(n)

## 🗂 Space Complexity
O(n)


