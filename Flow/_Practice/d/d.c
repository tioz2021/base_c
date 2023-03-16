#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b;
    scanf("%d%d", &a, &b);

    while(b != 0)
    {
        b = a % b;
        int temp = b;
        a = temp;
    }

    printf("%d", a);

    return 0;
}
