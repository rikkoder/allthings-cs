#include <stdio.h>
#include <stdlib.h>

void merge_sort(int arr[], int size) {
	if (size <= 1) return ;

	// recursively sort both halfes of the array
	merge_sort(arr, size/2) ;
	merge_sort(arr+size/2, size/2 + size%2) ;

	// merge the sorted subarrays into a single sorted array
	int *sorted = (int *) malloc(size * sizeof(int)) ;
	int i = 0, j = size/2 ;
	int I = 0;

	while (i != size/2 && j != size) {
		if (arr[i] > arr[j])
			sorted[I++] = arr[j++] ;

		else
			sorted[I++] = arr[i++] ;
	}

	while (i != size/2)
		sorted[I++] = arr[i++] ;

	while (j != size)
		sorted[I++] = arr[j++] ;

	// copy the auxilary sorted array into the original array
	for (int i=0; i<size; i++)
		arr[i] = sorted[i] ;

	free(sorted) ;
}


int main () {
	int array[] = { 30, 40, 10, 20, 90 };
	int size = sizeof(array)/sizeof(array[0]);

	printf("before sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	merge_sort(array, size);

	printf("\nafter sorting: ");
	for (int i = 0; i < size; i++) {
		printf("%d\t", array[i]);
	}

	return 0;
}
