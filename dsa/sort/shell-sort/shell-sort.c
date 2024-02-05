/* using oringinal shell's period for subsequences: size/2, size/4, .., 1 */

#include <stdio.h>

#define swap(x, y) {typeof(x) temp = x; x = y; y = temp;}

void shell_sort(int arr[], int size) {
	int period = size/2;
	while (period) {
		// a pass of insertion sort for the sequence: array[0], array[period], ..., array[k x period]
		for (int i = 0; i < size; i += period) {
			for (int j = i; j > 0; j -= period) {
				if (arr[j] < arr[j-period])
					swap(arr[j], arr[j-period]);
			}
		}

		// half the period after each pass
		period /= 2;
	}
}


int main () {
	int array[] = { 30, 40, 10, 20, 90 };
	int size = sizeof(array)/sizeof(array[0]);

	printf("before sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	shell_sort(array, size);

	printf("\nafter sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	return 0;
}
