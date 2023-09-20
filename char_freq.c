#include <stdio.h>
#include <string.h>
int main()
{
    char iN[100];
    int countArr[26];

    int i;

    for(i =0; i<26; i++)
    {
        countArr[i]=0;
    }

    printf("Input  a string : ");
    gets(iN);

    for(i=0; i<=(strlen(iN)); i++)
    {
        if(iN[i]>='A' && iN[i]<='Z')
        {
            countArr[iN[i]-65]++;
        }
        else if(iN[i]>='a' && iN[i]<='z')
        {
            countArr[iN[i]-97]++;
        }
    }

    printf("The most repeated characters are: ");

    int max = 0;
    for(i=0; i<26; i++)
    {
        if(countArr[i]> max)
        {
            max = countArr[i];
        }
    }


    for(i=0; i<26; i++)
    {
        if(countArr[i]== max)
        {
            printf("%c ",i+97);
        }
    }
    printf("\n");

    printf("The least repeated characters are: ");

    int min = 100000;

    for(i=0; i<26; i++)
    {
        if(countArr[i] < min && countArr[i] > 0)
        {
            min = countArr[i];
        }
    }

    for(i =0; i<26; i++)
    {
        if(countArr[i]== min)
        {
            printf("%c ",i+97);
        }
    }
    return 0;
}