# Problem 4: Task Scheduler

## 🔗 LeetCode Link
https://leetcode.com/problems/task-scheduler/

## 🧩 Problem Summary
You are given a list of CPU tasks represented by capital letters and a non-negative integer `n` representing the cooldown period between the same tasks.  
Each task takes **1 unit of time**, and the same task must have at least `n` units of cooldown before it can be executed again.  
Return the **minimum total time units** required to finish all tasks.

---

## 💡 Approach

### Greedy + Data Structures (Max Heap + Queue)

1. **Count frequency** of each task.
2. Use a **max heap** to always execute the task with the highest remaining frequency.
3. After executing a task:
   - Decrease its count
   - If it still has remaining executions, put it into a **cooldown queue** with the time it can be scheduled again.
4. At every time unit:
   - Execute one task if available
   - Move tasks from cooldown queue back to heap when cooldown expires
5. Continue until both heap and cooldown queue are empty.

---

### 🧠 Key Idea
- Always prioritize the most frequent task
- Enforce cooldown using a queue that tracks when a task becomes available again

---

## ⏱ Time Complexity
O(N log K)  
Where:
- `N` = total number of tasks
- `K` = number of unique tasks

---

## 🗂 Space Complexity
O(K)  
For the heap, frequency map, and cooldown queue
