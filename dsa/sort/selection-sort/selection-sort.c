#include <stdio.h>

#define swap(x, y) {typeof(x) temp = x; x = y; y = temp;}


void selection_sort(int array[], int size) {
	// index to store next smallest element
	int sorted = 0;
	while (sorted < size-1) {
		// index of next smallest element
		int min = sorted;
		for (int i=sorted+1; i<size; i++) {
			if (array[i] < array[min]) {
				min = i;
			}
		}
		swap(array[sorted], array[min]);
		sorted++;
	}
}


int main () {
	int array[] = { 30, 40, 10, 20, 90 };
	int size = sizeof(array)/sizeof(array[0]);

	printf("before sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	selection_sort(array, size);

	printf("\nafter sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	return 0;
}
