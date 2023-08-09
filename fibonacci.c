#include <stdio.h>

int main (void)
{
    int n, a = 0, b = 1, c;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        if(i < 2)
        {
            c = i;
        }
        else
        {
            c = a +b;
            a = b;
            b = c;
        }
        printf("%d ",c) ;
    }
    return 0;
}