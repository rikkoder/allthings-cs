# Quick Sort

## Introduction
Quicksort is an efficient, general-purpose sorting algorithm. It is a commonly used algorithm for sorting. Overall, it is slightly faster than merge sort and heapsort for randomized data, particularly on larger distributions.

## Working
Quicksort is a **divide-and-conquer** algorithm. It works by selecting a *pivot* element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. For this reason, it is sometimes called ***partition-exchange*** sort. The sub-arrays are then sorted recursively. This can be done **in-place**, requiring small additional amounts of memory to perform the sorting. Quicksort is **unstable** in nature, i.e. equal valued elements do not preserve their original order.

![(quick-sort example)](https://cdn.kastatic.org/ka-perseus-images/9876d4dc59e01a4742860ae1831c20f654ed7959.png)

## Analysis
For an array containing $n$ number of elements.
- Time Complexity
    - Worst case (when pivot is always max or min of sub-array): $O(n^2)$
    - Average case (random array): $O(n \times log(n))$
    - Best case (when pivot is always median of sub-array): $O(n \times log(n))$
- Space Complexity
    - Same for all cases: $O(n)$ for input array + $O(log(n))$ auxiliary space for recursion stack.

## More to read
- [Wikipedia](https://en.wikipedia.org/wiki/Quicksort)
- [Khan Academy](https://www.khanacademy.org/computing/computer-science/algorithms/quick-sort/a/overview-of-quicksort)
- [programiz.com](https://www.programiz.com/dsa/quick-sort)
