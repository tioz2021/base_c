#include <stdio.h>

int main(int argc, char* argv[])
{
    int n, x;
    scanf("%d", &n);
    x = n;

    while(n != 0)
    {
        scanf("%d", &n);
        if(x < n)
            x = n;
    }

    printf("%d", x);

    return 0;
}
