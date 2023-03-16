#include <stdio.h>

int findMin(int a, int b, int c);

int main(int argc, char* argv[])
{
    int r = findMin(20, 30, 50);
    return r;
}

int findMin(int a, int b, int c)
{
    scanf("%d%d%d", &a, &b, &c);

    if(a < b && a < c) return a;
    else if(b < a && b < c) return b;
    else return c;
};
