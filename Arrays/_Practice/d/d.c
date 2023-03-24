#include <stdio.h>

#define SIZE 100000

void arr_scanf(int arr[], int count, int min, int max) {
	int t;
	for(int i = 0; i < count; ++i) {
		scanf("%d", &t);
		(t > min && t < max) ? arr[i] = t : ++count;
		if(t == 0) break;
	}
}

int arr_max_number_count(int arr[], int count) {
	int number_counter = 0;
	int top_number = 0, top_number_counter = 0;
	for(int i = 0; i < count; ++i) {
		int number = arr[i];
		for(int j = 0; j < count; ++j) {
			//printf("number = %d\n", number); 
			if(number == arr[j]) ++number_counter;
			//printf("number_counter = %d\n", number_counter); 
		}
		if(number_counter > top_number_counter) {
			//printf("number_counter = %d and top_number_counter = %d\n", number_counter, top_number_counter); 
			top_number = number;
			top_number_counter = number_counter;
		}
		number_counter = 0;
	}
	return top_number;
}

int main(int argc, char* argv) {
	int count, min = 0, max = 100, r;
	int arr[SIZE];
	
	scanf("%d", &count);
	arr_scanf(arr, count, min, max);
	r = arr_max_number_count(arr, count);

	printf("\n%d", r);
	return 0;
}
