#include <stdio.h>
#include <stdbool.h>

void selection_sort(int arr[], int n) {
	int i, j, min_index, temp;
	for (i = 0; i < n-1; i++) {
		min_index = i;
		for (j = i+1; j < n; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
		temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
	}
}

int main(int argc, char* argv[]) {
	int arr[5] = {10, 3, 5, 6, 7};
	selection_sort(arr, 5);

	for(int i = 0; i < 5; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
