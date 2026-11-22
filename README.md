# DAA Lab – All 21 Questions in C++ (24 Programs)

Complete C++ implementations for all 21 examination questions, following the syllabus requirements.
- **Q01**: Two separate files (1a Brute Force / Selection Sort, 1b Quickselect)
- **Q02**: Two separate files (2a Recursive Hanoi, 2b Non-Recursive Hanoi)
- **Q05**: Two separate files (5a Linear Probing, 5b Quadratic Probing)
- **Remaining 18 Questions (Q03, Q04, Q06–Q21)**: One clean standalone program each.

Every program is standalone, minimal, uses `#include <bits/stdc++.h>`, takes user input, and contains no comments.

---

## 📋 Complete File Directory (24 Programs)

| Q# | File Name | Algorithm / Topic | Method / Complexity |
|---|---|---|---|
| **01(a)** | [`q01_a_kth_smallest_sorting.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q01_a_kth_smallest_sorting.cpp) | Kth Smallest | Brute Force (Selection Sort) — $O(n^2)$ |
| **01(b)** | [`q01_b_kth_smallest_quickselect.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q01_b_kth_smallest_quickselect.cpp) | Kth Smallest | Quickselect (Randomized Pivot) — Average $O(n)$ |
| **02(a)** | [`q02_a_tower_of_hanoi_recursive.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q02_a_tower_of_hanoi_recursive.cpp) | Towers of Hanoi | Recursive Method |
| **02(b)** | [`q02_b_tower_of_hanoi_iterative.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q02_b_tower_of_hanoi_iterative.cpp) | Towers of Hanoi | Non-Recursive (Explicit Stacks Simulation) |
| **03** | [`q03_stack_using_LL.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q03_stack_using_LL.cpp) | Stack using Linked List | Push, Pop, Peek, Display, Exit |
| **04** | [`q04_Queue_using_LL.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q04_Queue_using_LL.cpp) | Queue using Linked List | Enqueue, Dequeue, Front, Display, Exit |
| **05(a)** | [`q05_a_hash_table_linear_probing.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q05_a_hash_table_linear_probing.cpp) | Hash Table | Linear Probing: $(h(k) + i) \pmod m$ |
| **05(b)** | [`q05_b_hash_table_quadratic_probing.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q05_b_hash_table_quadratic_probing.cpp) | Hash Table | Quadratic Probing: $(h(k) + i^2) \pmod m$ |
| **06** | [`q06_two_sum.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q06_two_sum.cpp) | Two Sum Target $T$ | Hash Set (`unordered_set`) — Average $O(n)$ |
| **07** | [`q07_freq_of_element.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q07_freq_of_element.cpp) | Element Frequency | Hashing (`unordered_map`) with Order Tracking |
| **08** | [`q08_merge_sort.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q08_merge_sort.cpp) | Merge Sort | Divide & Conquer ($O(n \log n)$) |
| **09** | [`q09_Quick_sort.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q09_Quick_sort.cpp) | Quick Sort | In-place Partitioning ($O(n \log n)$ avg, $O(n^2)$ worst) |
| **10** | [`q10_max_min_element.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q10_max_min_element.cpp) | Max & Min Element | Divide & Conquer vs Traditional (Comparison Counting) |
| **11** | [`q11_max_subarray.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q11_max_subarray.cpp) | Maximum Subarray Problem | Divide & Conquer Crossing Sum (with Subarray Output) |
| **12** | [`q12_strassen_matrix_multiplication.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q12_strassen_matrix_multiplication.cpp) | Strassen's Matrix Mult | Strassen 7 Products vs Normal Multiplication |
| **13** | [`q13_frac_knapsack_greedy.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q13_frac_knapsack_greedy.cpp) | Fractional Knapsack | Greedy Profit/Weight Ratio Selection |
| **14** | [`q14_dijkstra_single_source.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q14_dijkstra_single_source.cpp) | Dijkstra's Algorithm | Priority Queue Min-Heap Single Source Paths |
| **15** | [`q15_mst_krushkal.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q15_mst_krushkal.cpp) | Kruskal's MST | Edge Sorting + Disjoint Set Union (DSU) |
| **16** | [`q16_mst_prims.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q16_mst_prims.cpp) | Prim's MST | Priority Queue Vertex Growing Minimum Spanning Tree |
| **17** | [`q17_huffman.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q17_huffman.cpp) | Huffman Coding | Greedy Min-Heap Prefix Code Construction |
| **18** | [`q18_flloyd_warshall.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q18_flloyd_warshall.cpp) | Floyd-Warshall Algorithm | Dynamic Programming All-Pairs Shortest Paths |
| **19** | [`q19_0-1_knapsack.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q19_0-1_knapsack.cpp) | 0/1 Knapsack Problem | 2D Dynamic Programming Table + Selected Items |
| **20** | [`q20_matrix_mux_DP.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q20_matrix_mux_DP.cpp) | Matrix Chain Multiplication | DP Minimum Cost + Optimal Parenthesization |
| **21** | [`q21_N-Queens.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/q21_N-Queens.cpp) | N-Queens Problem | Backtracking Search (All Boards + Total Count) |
