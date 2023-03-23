#include <stdio.h>

#define SIZE 10000

int main(int argc, char* argv[]) {
	int n, i;
	scanf("%d", &n);
	int arr[SIZE];

	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for(i = n-1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}

	return 0;
}

