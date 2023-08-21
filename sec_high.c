#include <stdio.h>

int main (void)
{
    int mark[10], high = 0, sec = 0, i;
    printf("Marks : ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &mark[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(high < mark[i])
        {
            sec = high;
            high = mark[i];
        }
    }
    printf("Highest is %d, and second highest is %d", high, sec);

}
