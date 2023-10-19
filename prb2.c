#include <stdio.h>

int main(void)
{
    int a = 2, b = 5;
    int *p1 = &a, *p2 = &b;

    printf("Before swap, A = %d & B = %d\n", *p1, *p2);

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    printf("After swap, A = %d & B = %d\n", *p1, *p2);


    return 0;
}
