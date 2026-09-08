#include <stdio.h>

void swap(int *e, int *n) {
    int temp;

    temp = *e;
    *e = *n;
    *n = temp;
}

int main() {
    int x = 19;
    int y = 22;

    printf("Before swap:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
