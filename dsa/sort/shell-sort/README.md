# Shell Sort

## Introduction
Shellsort, also known as Shell sort or Shell's method, is an in-place comparison sort. It can be seen as either a generalization of sorting by exchange (bubble sort) or sorting by insertion (insertion sort). Shellsort is an optimization of insertion sort that allows the exchange of items that are far apart.

## Working
The idea is to arrange the list of elements so that, starting anywhere, taking every hth element produces a sorted list. Such a list is said to be h-sorted. It can also be thought of as h interleaved lists, each individually sorted. Beginning with large values of h allows elements to move long distances in the original list, reducing large amounts of disorder quickly, and leaving less work for smaller h-sort steps to do. If the list is then k-sorted for some smaller integer k, then the list remains h-sorted. A final sort with h = 1 ensures the list is fully sorted at the end, but a judiciously chosen decreasing sequence of h values leaves very little work for this final pass to do.

![(shell-sort example)](https://upload.wikimedia.org/wikipedia/commons/d/d8/Sorting_shellsort_anim.gif)
*Shellsort with gaps 23, 10, 4, 1 in action*

## Analysis
For array containing $n$ number of elements.
- Time Complexity
    - Worst case:
        - $O(n^2)$ (worst known worst case gap sequence)
        - $O(n \times log^2(n))$ (best known worst case gap sequence)
    - Average case: depends on gap sequence.
    - Best case:
        - $O(n \times log(n))$ (most gap sequences)
        - $O(n \times log^2(n))$ (best known worst case gap sequence)
- Space Complexity
    - Same for all cases: $O(n)$ for input array + $O(1)$ auxiliary space.

## More to read
- [Wikipedia](https://en.wikipedia.org/wiki/Shellsort)
