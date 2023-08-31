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

    printf("Position of insertion : ");
    scanf("%d", &pos);

    printf("Data being inserted : ");
    scanf("%d", &data);

    for (i = size; i >= pos; i--)
    {
        mark[i] = mark[i - 1];
    }
    mark[pos - 1] = data;
    size++;

    for(i = 0; i < size; i++)
    {
        printf("%d ", mark[i]);
    }
    printf("\n");

}
