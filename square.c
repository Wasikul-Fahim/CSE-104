#include<stdio.h>

int main(void)
{
    int i, j, N;
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
    {
        for(j = 1; j <= N; j++)
        {
            if(i == 1 || i==N || j==1 || j==N)
            {
                /* Print star for 1st, Nth row and column */
                printf("%c ", (64+j));
            }
            else
            {
                printf("  ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }


    return 0;
}