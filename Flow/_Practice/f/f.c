#include <stdio.h>

int main(int argc, char* argv[])
{
    int n, c = 0;
    scanf("%d", &n);

    while(n != 0)
    {
        int tmp;
        tmp = n;
        scanf("%d", &n);

        if(tmp < n) c++;
    }

    printf("%d", c);

    return 0;
}
