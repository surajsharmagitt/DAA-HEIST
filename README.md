# DAA Lab – All 21 Questions in C++ (24 Programs)

Complete C++ implementations for all 21 DAA laboratory questions (24 programs total).

- **Header:** `#include <bits/stdc++.h>` and `using namespace std;` across all programs.
- **Zero comments:** Clean, minimal, exam-ready code.
- **Compile:** `g++ -std=c++17 <filename>.cpp -o program`

---

## 📋 Complete Directory of Programs

| Q# | File Name | Algorithm / Topic | Input Format |
|---|---|---|---|
| **1a** | [`01a_kth_brute.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/01a_kth_brute.cpp) | $K^{\text{th}}$ Smallest via Selection Sort | `n`, array of `n` values, `k` |
| **1b** | [`01b_kth_quickselect.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/01b_kth_quickselect.cpp) | $K^{\text{th}}$ Smallest via Quickselect | `n`, array of `n` values, `k` |
| **2a** | [`02a_hanoi_recursive.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/02a_hanoi_recursive.cpp) | Towers of Hanoi Recursive | `n` |
| **2b** | [`02b_hanoi_iterative.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/02b_hanoi_iterative.cpp) | Towers of Hanoi Iterative (Stacks) | `n` |
| **3** | [`03_stack_linked_list.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/03_stack_linked_list.cpp) | Stack using Linked List | Menu: `1 val` (Push), `2` (Pop), `3` (Peek), `4` (Display), `5` (Exit) |
| **4** | [`04_queue_linked_list.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/04_queue_linked_list.cpp) | Queue using Linked List | Menu: `1 val` (Enqueue), `2` (Dequeue), `3` (Front), `4` (Display), `5` (Exit) |
| **5a** | [`05a_linear_probing.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/05a_linear_probing.cpp) | Hash Table (Linear Probing) | Table size, key count, keys |
| **5b** | [`05b_quadratic_probing.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/05b_quadratic_probing.cpp) | Hash Table (Quadratic Probing) | Table size, key count, keys |
| **6** | [`06_two_sum.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/06_two_sum.cpp) | Two Sum Target $T$ ($O(n)$ Hash Set) | `n`, array, target $T$ |
| **7** | [`07_frequency_hashing.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/07_frequency_hashing.cpp) | Frequency via Hashing | `n`, array |
| **8** | [`08_merge_sort.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/08_merge_sort.cpp) | Merge Sort (Divide & Conquer) | `n`, array |
| **9** | [`09_quick_sort.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/09_quick_sort.cpp) | Quick Sort (In-place Partitioning) | `n`, array |
| **10** | [`10_max_min_divide_conquer.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/10_max_min_divide_conquer.cpp) | Min/Max using Divide and Conquer | `n`, array (outputs min, max, D&C comparisons vs traditional) |
| **11** | [`11_maximum_subarray.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/11_maximum_subarray.cpp) | Maximum Subarray via D&C | `n`, array (outputs max sum and elements) |
| **12** | [`12_strassen_matrix.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/12_strassen_matrix.cpp) | Strassen 2x2 vs Normal Multiplication | Eight integers: A rowwise, B rowwise |
| **13** | [`13_fractional_knapsack.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/13_fractional_knapsack.cpp) | Fractional Knapsack (Greedy) | `n`, capacity, then `n` pairs: `weight profit` |
| **14** | [`14_dijkstra.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/14_dijkstra.cpp) | Dijkstra Single Source Shortest Path | `n`, `m`, directed (`1`=yes, `0`=no), `m` triples `u v w`, source |
| **15** | [`15_kruskal.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/15_kruskal.cpp) | Kruskal's MST (DSU) | `n`, `m`, then `m` triples `u v w` |
| **16** | [`16_prims.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/16_prims.cpp) | Prim's MST | `n`, `m`, then `m` triples `u v w` |
| **17** | [`17_huffman.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/17_huffman.cpp) | Huffman Coding (Min-Heap) | `n`, then `n` pairs: `char frequency` |
| **18** | [`18_floyd_warshall.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/18_floyd_warshall.cpp) | Floyd-Warshall All-Pairs Shortest Path | `n`, then $n \times n$ adjacency matrix (`-1` for missing edge) |
| **19** | [`19_zero_one_knapsack.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/19_zero_one_knapsack.cpp) | 0/1 Knapsack Problem (Dynamic Programming) | `n`, capacity, then `n` pairs: `weight profit` |
| **20** | [`20_matrix_chain_multiplication.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/20_matrix_chain_multiplication.cpp) | Matrix Chain Multiplication (DP) | `n`, then `n+1` dimensions |
| **21** | [`21_n_queens.cpp`](file:///Users/surajsharma/Downloads/DAA%20heist/21_n_queens.cpp) | N-Queens Backtracking | `n` (outputs all boards and total count) |
