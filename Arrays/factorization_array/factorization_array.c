#include <stdio.h>

int get_nubmer_factors(int x, int arr[]) {
	int top = 0;
	int divisor = 2;
	while(x != 1) {
		while(x%divisor == 0) {
			arr[top] = divisor;
			top += 1;
			x /= divisor;
		}
		divisor += 1;
	}
	return top;
}

int main(int argc, char* argv[]) {
	int x;
	printf("Enter number to factorize: ");
	scanf("%d", &x);
	int arr[100];
	int N;
	N = get_nubmer_factors(x, arr);

	for(int i = 0; i < N; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
