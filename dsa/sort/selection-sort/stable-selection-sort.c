#include <stdio.h>
#include <stdlib.h>

#define swap(x, y) {typeof(x) temp = x; x = y; y = temp;}

// any comparison based sorting algorithm can be made stable by keeping track of the original indices of the elements, following is an example using selection sort.
void stable_selection_sort(int array[], int size) {
	// array to keep track original indices of the array elements.
	int *index = (int *) malloc(size*sizeof(int));
	for (int i=0; i<size; i++) index[i] = i;

	int sorted = 0;
	while (sorted < size-1) {
		int min = sorted;
		for (int i=sorted+1; i<size; i++) {
			if (array[i] < array[min] || (array[min] == array[i] && index[i] < index[min])) {
				min = i;
			}
		}
		swap(array[sorted], array[min]);
		swap(index[sorted], index[min]);
		sorted++;
	}

	// print original indices
	printf("\noriginal indices: ");
	for (int i=0; i<size; i++) printf("%d\t", index[i]);

	free(index);
}

int main () {
	int array[] = { 30, 40, 10, 20, 90, 10 };
	int size = sizeof(array)/sizeof(array[0]);

	printf("before sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	stable_selection_sort(array, size);

	printf("\nafter sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	return 0;
}
