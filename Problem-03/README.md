# Problem 3: Predict the Winner

## 🔗 LeetCode Link
https://leetcode.com/problems/predict-the-winner/

## 🧩 Problem Summary
Two players play a game by picking numbers from either end of an array.  
Each player plays optimally. Determine whether **Player 1** can win or tie.

---

## 💡 Approach

### 1. Brute Force (Recursion – Minimax)

At each turn, the current player can:
- Pick the left number
- Pick the right number

The goal is to **maximize the score difference** between the current player and the opponent.

   Let  
   - `f(l, r)` = maximum score difference the current player can achieve from subarray `nums[l...r]`


  
   *Base cases:*
   - If l == r → return nums[l]
    
  🔁 Recursive Relation

  ```
  scoreByLeft = nums[l] - f(l+1, r)
  scoreByRight = nums[r] - f(l, r-1)

  f(l, r) = max(scoreByLeft, scoreByRight)

  ```

--- 


## ⏱ Time Complexity
O(2^n)

## 🗂 Space Complexity
O(n)


