# DAA Lab Exercises — Exam Master Index (C++17)

All 21 examination questions are implemented in modern standard **C++17**, arranged strictly in numerical order (`q01_` through `q21_`). For questions with two approaches, both a **combined solution** (implementing both approaches in one program) and **two standalone separate solutions** are provided.

---

## 📋 Complete Question & File Directory (31 C++ Programs)

### Question 01: Kth Smallest Number with Various Approaches
- **Both Methods Combined:** [`q01_kth_smallest_both.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q01_kth_smallest_both.cpp)
- **Method 1 (Sorting):** [`q01_kth_smallest_sorting.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q01_kth_smallest_sorting.cpp)
- **Method 2 (Quickselect Partitioning):** [`q01_kth_smallest_quickselect.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q01_kth_smallest_quickselect.cpp)

---

### Question 02: Towers of Hanoi (Recursive to Non-Recursive)
- **Both Methods Combined:** [`q02_tower_of_hanoi_both.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q02_tower_of_hanoi_both.cpp)
- **Method a (Recursive):** [`q02_tower_of_hanoi_recursive.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q02_tower_of_hanoi_recursive.cpp)
- **Method b (Non-Recursive / Stacks):** [`q02_tower_of_hanoi_iterative.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q02_tower_of_hanoi_iterative.cpp)

---

### Question 03: Stack Operations using Linked List
- [`q03_stack_using_LL.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q03_stack_using_LL.cpp) — Menu-driven: Push, Pop, Peek, Display, Exit.

---

### Question 04: Queue Operations using Linked List
- [`q04_Queue_using_LL.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q04_Queue_using_LL.cpp) — Menu-driven: Enqueue, Dequeue, Front, Display, Exit.

---

### Question 05: Hash Table with Linear & Quadratic Probing
- **Both Methods Combined:** [`q05_hash_table_both.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q05_hash_table_both.cpp)
- **Method a (Linear Probing):** [`q05_hash_table_linear_probing.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q05_hash_table_linear_probing.cpp)
- **Method b (Quadratic Probing):** [`q05_hash_table_quadratic_probing.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q05_hash_table_quadratic_probing.cpp)

---

### Question 06: Two Sum Target T (Average $O(n)$)
- [`q06_two_sum.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q06_two_sum.cpp) — `std::unordered_set` based implementation achieving average $O(n)$ time complexity.

---

### Question 07: Frequency of Distinct Elements using Hashing
- [`q07_freq_of_element.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q07_freq_of_element.cpp) — `std::unordered_map` frequency tracking with order preservation.

---

### Question 08: Merge Sort & Time Complexity Analysis
- [`q08_merge_sort.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q08_merge_sort.cpp) — Merge sort implementation + recurrence $T(n) = 2T(n/2) + O(n)$ and $O(n \log n)$ analysis.

---

### Question 09: Quick Sort & Time Complexity Analysis
- [`q09_Quick_sort.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q09_Quick_sort.cpp) — Quick sort implementation + best/average $O(n \log n)$ and worst $O(n^2)$ analysis.

---

### Question 10: Maximum & Minimum Element (Divide & Conquer vs Traditional)
- **Both Strategies Combined & Compared:** [`q10_max_min_both.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q10_max_min_both.cpp)
- **Strategy 1 (Divide & Conquer):** [`q10_max_min_divide_and_conquer.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q10_max_min_divide_and_conquer.cpp) — $\approx \frac{3n}{2} - 2$ comparisons.
- **Strategy 2 (Traditional Linear Scan):** [`q10_max_min_traditional.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q10_max_min_traditional.cpp) — $2(n - 1)$ comparisons.

---

### Question 11: Maximum Subarray Problem (Divide and Conquer)
- [`q11_max_subarray.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q11_max_subarray.cpp) — Divide & Conquer with maximum crossing subarray sum and subarray bounds.

---

### Question 12: Strassen's Matrix Multiplication vs Normal Multiplication
- **Both Methods Combined & Compared:** [`q12_matrix_multiplication_both.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q12_matrix_multiplication_both.cpp)
- **Method 1 (Strassen's Algorithm):** [`q12_strassen_matrix_multiplication.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q12_strassen_matrix_multiplication.cpp) — 7 multiplications, $O(n^{2.81})$.
- **Method 2 (Normal Multiplication):** [`q12_matrix_multiplication_normal.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q12_matrix_multiplication_normal.cpp) — 8 multiplications, $O(n^3)$.

---

### Question 13: Fractional Knapsack (Greedy Approach)
- [`q13_frac_knapsack_greedy.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q13_frac_knapsack_greedy.cpp) — Profit-to-weight ratio greedy selection with fraction calculations.

---

### Question 14: Dijkstra's Single Source Shortest Path
- [`q14_dijkstra_single_source.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q14_dijkstra_single_source.cpp) — Min-heap priority queue single-source shortest paths.

---

### Question 15: Kruskal's Minimum Spanning Tree
- [`q15_mst_krushkal.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q15_mst_krushkal.cpp) — Edge sorting + Disjoint Set Union (DSU) with path compression.

---

### Question 16: Prim's Minimum Spanning Tree
- [`q16_mst_prims.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q16_mst_prims.cpp) — Min-heap priority queue vertex-growth spanning tree.

---

### Question 17: Huffman Coding
- [`q17_huffman.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q17_huffman.cpp) — Optimal binary prefix tree code generation with dynamic memory management.

---

### Question 18: Floyd-Warshall All-Pairs Shortest Paths
- [`q18_flloyd_warshall.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q18_flloyd_warshall.cpp) — All-pairs dynamic programming with `INF` addition overflow protection.

---

### Question 19: 0/1 Knapsack Problem (Dynamic Programming)
- [`q19_0-1_knapsack.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q19_0-1_knapsack.cpp) — 2D DP table with selected item backtracking.

---

### Question 20: Matrix Chain Multiplication (Dynamic Programming)
- [`q20_matrix_mux_DP.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q20_matrix_mux_DP.cpp) — Minimum scalar multiplications and full optimal parenthesization display.

---

### Question 21: N-Queens Problem (Backtracking)
- [`q21_N-Queens.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q21_N-Queens.cpp) — Backtracking search printing chess boards and total solution count.
