#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int n;
    int i = 1;
    scanf("%d", &n);

    while(i <= n)
    {
        int sq = sqrt(i);
        if(sq * sq == i)
        {
            printf("%d ", i);
        }
        ++i;
    }

    return 0;
}
