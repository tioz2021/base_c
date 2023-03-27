#include <stdio.h>

#define SIZE 10000

int main(int argc, char* argv[]) {
	int n, arr[SIZE] = {0};
	scanf("%d", &n);

	for(int i = 0; i < n; ++i) {
		arr[i] = i;
	}

	for(int i = 2; i < n; ++i) {
		for(int k = i; k < n; ++k) {
			if(k%i==0 && k!=i)
				arr[k] = 0;
		}
	}

	for(int i = 2; i < n; ++i) {
		if(arr[i] != 0)
			printf("%d ", arr[i]);
	}
	
	return 0;
}
