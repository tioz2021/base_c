#include <stdio.h>
#include <stdbool.h>

void counting_sort(int arr[], int size) {
	int max = arr[0];

		for(int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count[max+1];
    for(int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    for(int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for(int i = 0; i <= max; i++) {
        for (int j = 0; j < count[i]; j++) {
            arr[index] = i;
            index++;
        }
    }
}

int main (int argc, char* argv[]) {
	int counters[10] = {0};
	int x;
	
	/*
	int counters[10] = {123, 23, 321, 432, 79, 789, 12312, 9, 10};
	counting_sort(counters, 10);
	for(int i = 0; i < 10; ++i) {
		printf("%d ", counters[i]);
	}
	printf("\n");
	*/
	
	while(true) {
		scanf("%d", &x);
		if(x == 10) break;
		if(x < 0 || x > 9) continue;
		counters[x] += 1;
	}

	int arr[10] = {9, 1, 8, 7, 2, 5, 7, 8, 11, 3};
	for(int i = 0; i < 10; ++i) {
		for(int j = 0; j < arr[i]; ++j) {
			printf("%3d ", i);
		}
	}

	return 0;
}
