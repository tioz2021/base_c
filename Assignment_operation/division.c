#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
    int x = -12345;
    while(x != 0)
    {
        printf("%d %d\n", x/1000, x%1000);
        x /= 10;
    }

    return 0;
}
