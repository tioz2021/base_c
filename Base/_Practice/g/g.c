#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("-1");
            } else {
                printf("0");
            }
        } else {
            float x = - (float) c / b;
            if (x > 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
    } else {
        int discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            float x1 = (- b + sqrt(discriminant)) / (2 * a);
            float x2 = (- b - sqrt(discriminant)) / (2 * a);
            if (x1 > 0 && x2 > 0) {
                printf("2");
            } else if (x1 > 0 || x2 > 0) {
                printf("1");
            } else {
                printf("0");
            }
        } else if (discriminant == 0) {
            float x = - (float) b / (2 * a);
            if (x > 0) {
                printf("1");
            } else {
                printf("0");
            }
        } else {
            printf("0");
        }
    }

    return 0;
}
