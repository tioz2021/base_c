#include <stdio.h>
#include <iso646.h>

#define SIZE 9999

int main(void)
{
    int n, m = 0, c = 0, i = 0;
    int arr[SIZE] = {0};
    scanf("%d", &n);

    while(n != 0)
    {
        arr[i] = n;
        ++i;

        if(n > m)
            m = n;
        scanf("%d", &n);
    }

    for(int i = 0; i < 9999; ++i)
    {
        if(arr[i] == m)
            ++c;
    }

    printf("%d", c);
}
