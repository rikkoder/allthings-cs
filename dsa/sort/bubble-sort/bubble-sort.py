def bubble_sort (array: list):
    size = len(array)

	# size - 1 rounds, in ith round ith largest element will be placed at right position.
    for i in range(size - 1):
		# bubbling the ith largest element towards the end.
        swaps = 0
        for j in range(size - 1 - i):
			# stable sorting: elements that compare equal preserve their order.
            if (array[j] > array[j+1]):
                array[j], array[j+1] = array[j+1], array[j]
                swaps += 1
        
        '''
		if no swaps were done in a round, the array has become sorted.
		This modification to bubble sort allows the algorithm to detect best case (already sorted array)
        '''
        if (swaps == 0):
            return;


def main ():
    array = [ 30, 40, 10, 20, 90 ]

    print('before sorting: ', end='')
    for x in array:
        print(x, end='\t')

    bubble_sort(array)

    print('\nafter sorting: ', end='')
    for x in array:
        print(x, end='\t')


if __name__ == '__main__':
    main()
