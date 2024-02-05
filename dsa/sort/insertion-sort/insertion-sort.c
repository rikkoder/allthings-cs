#include <stdio.h>

#define swap(x, y) {typeof(x) temp = x; x = y; y = temp;}

void insertion_sort(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		// array is sorted till (i-1)th index
		// placing ith element in the correct position for sorted subarray array[0..i]
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j-1]) {
				swap(arr[j], arr[j-1]);
			}
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

	insertion_sort(array, size);

	printf("\nafter sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	return 0;
}
