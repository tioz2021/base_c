#include <stdio.h>

int main(int argc, char* argv[])
{
    int x, b = 1;
    scanf("%d", &x);

    for(int i = 2; i < x; ++i)
    {
        if(x%i == 0)
        {
            b = 0;
            break;
        }
    }


    if(b == 1)
        printf("1");
    else
        printf("0");


    return 0;
}
