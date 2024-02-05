# Merge Sort

## Introduction
In computer science, merge sort (also commonly spelled as mergesort) is an efficient, general-purpose, and comparison-based sorting algorithm. Most implementations produce a **stable** sort, which means that the relative order of equal elements is the same in the input and output. Merge sort is a **divide-and-conquer** algorithm. Divide and conquer is a technique used for breaking algorithms down into subproblems, solving the subproblems, and then combining the results back together to solve the original problem. It can be helpful to think of this method as divide, conquer, and combine.

## Working
Mergesort has two steps: merging and sorting. The mergesort algorithm focuses on how to merge together two pre-sorted arrays such that the resulting array is also sorted. Mergesort can be implemented either recursively or iteratively.

Here is the recursive mergesort algorithm:

1. If the list has only one element, return the list and terminate. (Base case)
2. Split the list into two halves that are as equal in length as possible. (Divide)
3. Using recursion, sort both lists using mergesort. (Conquer)
4. Merge the two sorted lists and return the result. (Combine)

![(merge-sort example)](https://upload.wikimedia.org/wikipedia/commons/thumb/c/cc/Merge-sort-example-300px.gif/220px-Merge-sort-example-300px.gif)

## Analysis
For array containing $n$ number of elements.
- Time Complexity
    - Worst case (reversed sorted array): $O(n \times log(n))$
    - Average case (random array): $O(n \times log(n))$
    - Best case (sorted array): $O(n \times log(n))$
- Space Complexity
    - Same for all cases: $O(n)$ for input array + $O(n)$ auxiliary space ($O(1)$ auxiliary space with linked lists).

## More to read
- [Wikipedia](https://en.wikipedia.org/wiki/Merge_sort)
- [brilliant.org](https://brilliant.org/wiki/merge/)
