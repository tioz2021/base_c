#include <stdio.h>
#define SIZE 100000

void count_element_equal(int arr[], int n, int m) {
	int t = 0;
	for(int i = 0; i < n; ++i) {
		if(arr[i] > arr[m]) ++t;
	}
	printf("%d\n", t);
}

int main(int argc, char* argv[]) {
	int n, m, x;
	int arr[SIZE];
	
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
		if(i > SIZE ) break;
	}

	while(1) {
		scanf("%d", &x);
		if(x < n){
			m = x;
			break;
		}
	}

	count_element_equal(arr, n, m);
	return 0;
}
