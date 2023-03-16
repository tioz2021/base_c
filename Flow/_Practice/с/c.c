#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    int n, t = 0, i = 0;
    scanf("%d", &n);

    while(n != 0)
    {
        t += n;
        scanf("%d", &n);
        ++i;
    }

    double result = (double)t/i;
    result = round(result * 100) / 100;

    printf("%.2f", result);

    return 0;
}
