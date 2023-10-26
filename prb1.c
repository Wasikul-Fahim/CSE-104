#include <stdio.h>

int total_up (char * inp);

int main (void)
{
    char inp[100];
    printf("Input : ");
    scanf("%s", &inp);

    int n = total_up(inp);

    printf("%d uppercase letters\n", n);

    return 0;
}


int total_up (char * inp)
{
    int i = 0, num = 0;
    while(inp[i] != '\0')
    {
        if(inp[i] >= 'A' && inp[i] <= 'Z')
        {
            num++;
        }
        i++;
    }
    return num;
}
