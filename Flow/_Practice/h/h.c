#include <stdio.h>
#include <iso646.h>

int main(void)
{
    int n, x = 0;
    scanf("%d", &n);

    while(n != 0)
    {
        scanf("%d", &n);
        if(n > x and n%2 == 0)
            x = n;
    }
    printf("%d", x);

    return 0;
}
