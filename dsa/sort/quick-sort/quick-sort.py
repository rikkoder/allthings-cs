def quick_sort (array: list, start: int, end: int):
    if start < end:
        k = partition(array, start, end)
        quick_sort(array, start, k-1)
        quick_sort(array, k+1, end)


def partition (array: list, start: int, end: int) -> int:
    # take last element as pivot
    pivot = array[end]

    # Other variations are using first element, mid element or a random element as pivot.
    # To implement those variations one can simply swap the selected pivot with last the
    # element and then apply the following algorithm.

    # var to store the last index having element smaller than pivot
    i = start-1

    for j in range(start, end):
        if array[j] < pivot:
            i += 1
            (array[i], array[j]) = (array[j], array[i])

    # correct position of pivot = i+1
    (array[i+1], array[end]) = (array[end], array[i+1])

    return i+1



def main ():
    array = [ 30, 40, 10, 20, 90 ]

    print('before sorting: ', end='')
    for x in array:
        print(x, end='\t')

    quick_sort(array, 0, len(array)-1)

    print('\nafter sorting: ', end='')
    for x in array:
        print(x, end='\t')


if __name__ == '__main__':
    main()
