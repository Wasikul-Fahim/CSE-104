#include <stdio.h>

int main() 
{
    int heights[100], sz, sum = 0, i;
    printf("Number of bars : ");
    scanf("%d", &sz);

    for (i = 0; i < sz; i++)
    {
        scanf("%d", &heights[i]);
    }

    for (i = 0; i < sz; i++)
    {
        sum += heights[i];
    }

    printf("Total amount of rainwater that can be trapped is %d cc", sum);

}