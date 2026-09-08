#include <stdio.h>

int main() {
    int number = 190;

    int *ptr = &number;

    int **doublePtr = &ptr;

    printf("Using pointer: %d\n", *ptr);

    printf("Using double pointer: %d\n", **doublePtr);

    return 0;
}
