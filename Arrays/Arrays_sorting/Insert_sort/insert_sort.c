#include <stdio.h>
#include <stdbool.h>
// #include <iso646.h>

#define ALLOCATE_SIZE 1000

int input_array(int arr[], int max_size) {
	int top = 0;
	while(true) {
		int x;
		scanf("%d", &x);
		if(x == 0 || top == max_size) break;
		arr[top] = x;
		top++;
	}
	return top;
}

void insert_sort(int arr[], int size) {
  for(int i = 0; i < size; ++i) {
    int j = i;
    while(j > 0 && arr[j-1] > arr[j]) {
      int tmp = arr[j-1];
      arr[j-1] = arr[j];
      arr[j] = tmp;
      j -= 1;
    }
  }
}

void print_array(int arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("%3d,", arr[i]);
	}
	printf("\n");
}

int main(int argc, char* argv[]) {
	printf("Enter numbers:");
	int arr[ALLOCATE_SIZE];
	int N;

	N = input_array(arr, ALLOCATE_SIZE);
	insert_sort(arr, N);
	print_array(arr, N);

	return 0;
}
