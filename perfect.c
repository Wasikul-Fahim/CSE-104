#include <stdio.h>

int main (void)
{
    int num, sum = 0;
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    if(num == sum)
    {
        printf("%d is perfect number.\n", num);
    }
    else
    {
        printf("%d is not perfect number.\n", num);
    }


}