#include <stdio.h>

int main(int argc, char* argv[])
{
    int n_count = 0;

    int x, b = 0, i = 0;
    scanf("%d", &n_count);
    int n_numbers[99];

    while(i < n_count)
    {
        scanf("%d", &n_numbers[i]);
        ++i;
    }

    i = 0;
    scanf("%d", &x);

    while(i < n_count)
    {
        if(n_numbers[i]%x == 0)
        {
            printf("%d ", i);
            b = 1;
        }
        ++i;
    }

    if(b == 0) printf("-1");

    return 0;
}
