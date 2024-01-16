# Bubble Sort

## Introduction
Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the input list element by element, comparing the current element with the one after it, swapping their values if needed. The algorithm, which is a comparison sort, is named for the way the larger elements "bubble" up to the top of the list. Bubble sort is stable, which means that it preserves the order of equal elements in the array. Bubble sort is also inplace, which means it sorts the given array without requiring to create a duplicate of it.

## Working
The Bubble sort algorithm compares each pair of elements in an array and swaps them if they are out of order until the entire array is sorted. For each element in the list, the algorithm compares every pair of elements.

![(bubble-sort-example)](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif)

## Analysis
- Time Complexity
    - Worst case (reversed sorted array): $O(n^2)$
    - Average case (random array): $O(n^2)$
    - Best case (sorted array): $O(n)$
- Space Complexity
    - Same for all cases: $O(n)$ for input array + $O(1)$ auxiliary space.

## More to read
- [Wikipedia](https://en.wikipedia.org/wiki/Bubble_sort)
- [brilliant.org](https://brilliant.org/wiki/bubble-sort/)
