#include <stdio.h>

int main() {
    int x = 22;
    int *age = &x;
    printf("%p\n",(void *)&x);
    printf("%p\n",age);
    *age = 24;
    printf("%d\n",*age);

    return 0;
}
