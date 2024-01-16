#include <stdio.h>

void bubble_sort (int array[], int size) {
	// size - 1 rounds, in ith round ith largest element will be placed at right position.
	for (int i = 0; i < size-1; i++) {
		// bubbling the ith largest element towards the end.
		int swaps = 0;
		for (int j = 0; j < size - 1 - i; j++) {
			// stable sorting: elements that compare equal preserve their order.
			if (array[j] > array[j+1]) {
				int temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
				swaps++;
			}
		}
		
		/*
		 * if no swaps were done in a round, the array has become sorted.
		 * This modification to bubble sort allows the algorithm to detect best case (already sorted array)
		 */
		if (swaps == 0) {
			return;
		}
	}
}

int main () {
	int array[] = { 30, 40, 10, 20, 90 };
	int size = sizeof(array)/sizeof(array[0]);

	printf("before sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	bubble_sort(array, size);

	printf("\nafter sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	return 0;
}
