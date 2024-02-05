# Insertion Sort

## Introduction
Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time by comparisons. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages:
- **Simple Implementation**: can be implemented and understood easily.
- **Stable**; does not change the relative order of elements with equal keys.
- **In-place**; only requires a constant amount O(1) of additional memory space.
- **Online**; can sort a list as it receives it.

## Working
Sorting is typically done in-place, by iterating up the array, growing the sorted list behind it. At each array-position, it checks the value there against the largest value in the sorted list (which happens to be next to it, in the previous array-position checked). If larger, it leaves the element in place and moves to the next. If smaller, it finds the correct position within the sorted list, shifts all the larger values up to make a space, and inserts into that correct position.

![(insertion-sort example1)](https://upload.wikimedia.org/wikipedia/commons/4/42/Insertion_sort.gif)

![(insertion-sort example2)](https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)

## Analysis
For an array containing $n$ number of elements.
- Time Complexity
    - Worst case: $O(n^2)$
    - Average case: $O(n^2)$
    - Best case (sorted array): $O(n)$
- Space Complexity
    - Same for all cases: $O(n)$ for input array + $O(1)$ auxiliary space.

## More to read
- [Wikipedia](https://en.wikipedia.org/wiki/Insertion_sort)
- [brilliant.org](https://brilliant.org/wiki/insertion/)
