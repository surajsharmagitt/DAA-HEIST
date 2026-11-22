# DAA Lab Exercises — Exam Master Index

All 21 examination questions are implemented in pure C, arranged strictly in question order (`q01_` through `q21_`). For questions with two methods or approaches, both a **combined solution** (implementing both methods in a single program) and **two standalone separate solutions** are provided.

---

## 📋 Complete Question & File Directory (31 C Files)

### Question 01: Kth Smallest Number with Various Approaches
- **Both Methods Combined:** [`q01_kth_smallest_both.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q01_kth_smallest_both.c)
- **Method 1 (Sorting):** [`q01_kth_smallest_sorting.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q01_kth_smallest_sorting.c)
- **Method 2 (Quickselect Partitioning):** [`q01_kth_smallest_quickselect.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q01_kth_smallest_quickselect.c)

---

### Question 02: Towers of Hanoi (Recursive to Non-Recursive)
- **Both Methods Combined:** [`q02_tower_of_hanoi_both.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q02_tower_of_hanoi_both.c)
- **Method a (Recursive):** [`q02_tower_of_hanoi_recursive.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q02_tower_of_hanoi_recursive.c)
- **Method b (Non-Recursive / Peg Simulation):** [`q02_tower_of_hanoi_iterative.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q02_tower_of_hanoi_iterative.c)

---

### Question 03: Stack Operations using Linked List
- [`q03_stack_using_LL.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q03_stack_using_LL.c) — Menu-driven: Push, Pop, Display, Exit.

---

### Question 04: Queue Operations using Linked List
- [`q04_Queue_using_LL.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q04_Queue_using_LL.c) — Menu-driven: Enqueue, Dequeue, Display, Exit.

---

### Question 05: Hash Table with Linear & Quadratic Probing
- **Both Methods Combined:** [`q05_hash_table_both.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q05_hash_table_both.c)
- **Method a (Linear Probing):** [`q05_hash_table_linear_probing.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q05_hash_table_linear_probing.c)
- **Method b (Quadratic Probing):** [`q05_hash_table_quadratic_probing.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q05_hash_table_quadratic_probing.c)

---

### Question 06: Two Sum Target T (Average $O(n)$)
- [`q06_two_sum.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q06_two_sum.c) — Open-addressing Hash Table for average $O(n)$ time complexity.

---

### Question 07: Frequency of Distinct Elements using Hashing
- [`q07_freq_of_element.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q07_freq_of_element.c) — Hash Table frequency mapping with distinct element ordering.

---

### Question 08: Merge Sort & Time Complexity Analysis
- [`q08_merge_sort.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q08_merge_sort.c) — Standard merge sort with recurrence $T(n) = 2T(n/2) + O(n)$ and $O(n \log n)$ analysis.

---

### Question 09: Quick Sort & Time Complexity Analysis
- [`q09_Quick_sort.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q09_Quick_sort.c) — Hoare-style partitioning with best/average $O(n \log n)$ and worst $O(n^2)$ analysis.

---

### Question 10: Maximum & Minimum Element (Divide & Conquer vs Traditional)
- **Both Strategies Combined & Compared:** [`q10_max_min_both.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q10_max_min_both.c)
- **Strategy 1 (Divide & Conquer):** [`q10_max_min_divide_and_conquer.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q10_max_min_divide_and_conquer.c) — $\approx \frac{3n}{2} - 2$ comparisons.
- **Strategy 2 (Traditional Linear Scan):** [`q10_max_min_traditional.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q10_max_min_traditional.c) — $2(n - 1)$ comparisons.

---

### Question 11: Maximum Subarray Problem (Divide and Conquer)
- [`q11_max_subarray.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q11_max_subarray.c) — Divide & Conquer with maximum crossing subarray sum.

---

### Question 12: Strassen's Matrix Multiplication vs Normal Multiplication
- **Both Methods Combined & Compared:** [`q12_matrix_multiplication_both.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q12_matrix_multiplication_both.c)
- **Method 1 (Strassen's Algorithm):** [`q12_strassen_matrix_multiplication.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q12_strassen_matrix_multiplication.c) — 7 multiplications, $O(n^{2.81})$.
- **Method 2 (Normal Multiplication):** [`q12_matrix_multiplication_normal.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q12_matrix_multiplication_normal.c) — 8 multiplications, $O(n^3)$.

---

### Question 13: Fractional Knapsack (Greedy Approach)
- [`q13_frac_knapsack_greedy.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q13_frac_knapsack_greedy.c) — Profit/weight ratio greedy selection.

---

### Question 14: Dijkstra's Single Source Shortest Path
- [`q14_dijkstra_single_source.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q14_dijkstra_single_source.c) — Greedy single-source shortest path with relaxation.

---

### Question 15: Kruskal's Minimum Spanning Tree
- [`q15_mst_krushkal.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q15_mst_krushkal.c) — Edge weight sorting + Disjoint-Set Union-Find (supports 0-based and 1-based vertices).

---

### Question 16: Prim's Minimum Spanning Tree
- [`q16_mst_prims.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q16_mst_prims.c) — Greedy vertex growth MST algorithm.

---

### Question 17: Huffman Coding
- [`q17_huffman.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q17_huffman.c) — Optimal prefix tree construction and code display.

---

### Question 18: Floyd-Warshall All-Pairs Shortest Paths
- [`q18_flloyd_warshall.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q18_flloyd_warshall.c) — All-pairs dynamic programming with `INF` overflow protection.

---

### Question 19: 0/1 Knapsack Problem (Dynamic Programming)
- [`q19_0-1_knapsack.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q19_0-1_knapsack.c) — 2D DP table knapsack implementation.

---

### Question 20: Matrix Chain Multiplication (Dynamic Programming)
- [`q20_matrix_mux_DP.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q20_matrix_mux_DP.c) — Minimum scalar multiplications using dynamic programming.

---

### Question 21: N-Queens Problem (Backtracking)
- [`q21_N-Queens.c`](file:///Users/surajsharma/Downloads/DAA%20heist/q21_N-Queens.c) — Backtracking solution displaying the chess board placement.
