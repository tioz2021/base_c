#include <stdio.h>
#include <iso646.h>

int main(void)
{
    int n, m = 0, c = 0, i = 0;
    int arr[9999];
    scanf("%d", &n);

    for(int i = 0; i < 9999; ++i)
        arr[i] = 0;

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

    return 0;
}
