#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count_ones = 0;
    while (N > 0) {
        if (N & 1) {
            count_ones++;
        }
        N >>= 1;
    }

    if (count_ones == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
