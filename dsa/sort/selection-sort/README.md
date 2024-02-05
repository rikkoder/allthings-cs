# Selection Sort

## Introduction
In computer science, selection sort is an in-place comparison sorting algorithm. It has an O(n2) time complexity, which makes it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity and has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.

## Working
The algorithm divides the input list into two parts: a sorted sublist of items which is built up from left to right at the front (left) of the list and a sublist of the remaining unsorted items that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

![(selection-sort example)](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)
*Selection sort animation. Red is current min. Yellow is sorted list. Blue is current item.*

## Analysis
For an array containing $n$ number of elements.
- Time Complexity
    - Worst case: $O(n^2)$
    - Average case: $O(n^2)$
    - Best case: $O(n^2)$
- Space Complexity
    - Same for all cases: $O(n)$ for input array + $O(1)$ auxiliary space.

## More to read
- [Wikipedia](https://en.wikipedia.org/wiki/Selection_sort)
