#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    int *ptr = numbers;

    printf("Original array:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) + 5;
    }

    printf("Modified using pointer:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    printf("Modified using array name:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
