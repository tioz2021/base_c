#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char* argv[]) {
	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);

	if(a > b) {
        printf("%d", 1);
	}
	else if(a < b) {
        printf("%d", 2);
	}
	else {
        printf("%d", 0);
	}

	return 0;
}
