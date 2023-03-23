#include <stdio.h>

#define SIZE 10000

/*

	4 2
	0 [ 1, 2, 3, 4 ]
	1 [ 2, 3, 4, 1 ]
	2 [ 3, 4, 1, 2 ]
 
*/
void move_arr(int arr[], int n, int m) {
	for(int i = 0; i < m; ++i) {
		for(int j = 0; j < n-1; ++j) {
			int t = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = t;
		}

		/*
		for(int k = 0; k < n; ++k) {
			printf("%d ", arr[k]);
		}
		printf("\n");
		*/
	}
}

int main(int argc, char* argv[]) {
	int n, m, i = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	int arr[SIZE];
	
	for(i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	
	move_arr(arr, n, m);
	
	for(i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
