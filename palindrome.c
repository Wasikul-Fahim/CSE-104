#include <stdio.h>

int main (void)
{
    int N, n, R = 0;
    scanf("%d", &n);

    N = n;
    
    while (N != 0)
    {
        R = (R * 10) + (N % 10);
        N = N / 10;
    }

    if (R == n)
    {
        printf("%d is palindrome\n", n);
    }
    else
    {
        printf("%d is not palindrome\n", n);
    }

}