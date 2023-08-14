#include<stdio.h>

int main(void)
{
    int n, i, j;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(i % 2 == 0)
            {
                printf("%c", 65 + (i / 2) );
            }
            else
            {
                printf("%d", i / 2);
            }
        }
        printf("\n");
    }
    return 0;
}