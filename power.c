#include <stdio.h>

int power(int num, int pow);

int main (void)
{
    int num, pow, result;
    printf("Number : ");
    scanf("%d", &num);
    printf("Power : ");
    scanf("%d", &pow);

    result = power(num, pow);

    printf("%d", result);

}


int power(int num, int pow)
{
    if(pow > 1)
    {
        pow--;
        return (num * power(num, pow));
    }
    else
    {
        return num;
    }
}