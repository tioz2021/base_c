#include <stdio.h>

#define N 10

void print_array(int A[])
{
	for(int i = 0; i < N; ++i)
		printf(" %d", A[i]);
	printf("\n");
}

int main(int argc, char* argv[])
{
	int A[N] = {0};

	for(int i = 0; i < N; ++i)
		A[i] = i;
	print_array(A);

	for(int i = 0; i < N; ++i)
		A[i] = N - 1 - i;

	for(int i = 0; i < N; ++i)
		A[N - 1 - i] = i;
	print_array(A);

	for(int i = 0; i < N; ++i)
		A[i] = i%2;
	print_array(A);

	for(int i = 0; i < N; ++i)
	{
		A[2*i] = i;
		A[2*i+1] = N/2 + i;
	}
	print_array(A);

	return 0;
}
