#include <stdio.h>

int main (void)
{
    int mark[100], pos, data, i, size;

    printf("size of array : ");
    scanf("%d", &size);

    printf("Array : ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &mark[i]);
    }

    printf("Position of deleted element : ");
    scanf("%d", &pos);


    for (i = pos - 1; i <= size; i++)
    {
        mark[i] = mark[i + 1];
    }
    size--;

    for(i = 0; i < size; i++)
    {
        printf("%d ", mark[i]);
    }
    printf("\n");

}
