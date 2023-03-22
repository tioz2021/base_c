#include <stdio.h>

void bubble_sort(int arr[], int n) {
	int i, j, temp;
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(int argc, char* argv[]) {
	int arr[5] = {10, 3, 5, 6, 7};
	bubble_sort(arr, 5);

	for(int i = 0; i < 5; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
