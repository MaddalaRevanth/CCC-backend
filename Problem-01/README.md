# Problem 1: Edit Distance

## 🔗 LeetCode Link
  https://leetcode.com/problems/edit-distance/description/

---

## 🧩 Problem Summary
    
  Two words are given,we need to find the minimum number of operations to make them equal.
  
  These operations can be:
  - Inserting a character
  - Deleting a character
  - Replacing a character

---

## 💡 Approach
1. **Brute Force Approach:**
   
   At every character mismatch, we try all three possible operations:
    - Insert → move in word2
    - Delete → move in word1
    - Replace → move in both
   
   We take the minimum cost among them.

   Let `f(i,j)` = minimum no. of operations to convert `word1[i...end]`->`word2[j...end]`

   *Base cases:*

    - If `i==len(word1)` -> insert remaining characters from `word2`
    - If `j==len(word2)` -> delete remaining characters from `word1`

2. **Dynamic Programming**:
  
   Build the solution iteratively by storing redundant calls in DP table.

   `dp[i][j]`: minimum no. of operations to convert `word1[0...i-1]`->`word2[0...j-1]`


   ```
   if (word1[i-1] == word2[j-1])
    dp[i][j] = dp[i-1][j-1];
   else
    dp[i][j] = 1 + min(
        dp[i-1][j],    // Delete
        dp[i][j-1],    // Insert
        dp[i-1][j-1]   // Replace
    );

    return dp[m][n]

---

## ⏱ Time Complexity
O(m x n)

## 🗂 Space Complexity
O(m x n)


