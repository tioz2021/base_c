#include <stdio.h>
#include <iso646.h>

int main(int argc, char* argv[])
{
    int n, c = 0, i = 0;
    scanf("%d", &n);

    int arr[9999];
    while(i < n)
    {
        scanf("%d", &arr[i]);
        ++i;
    }
    i = 0;

    while(i <= n)
    {
        if(i%3 == 0 and i%7 == 0)
            c += arr[i];
        ++i;
    }

    printf("%d", c);

    return 0;
}
