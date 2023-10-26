#include <stdio.h>

struct ti_me
{
    int h, m, s;
};

int main (void)
{
    FILE *fin;
    FILE *fout;
    fin = fopen("input.txt", "w");
    fout = fopen("output.txt", "w");

    int n, h, m, s;
    scanf("%d", &n);

    struct ti_me time[n * 2];
    if(fin == NULL)
    {
        printf("Invalid File");
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%d %d %d %d %d %d", &time[i].h, &time[i].m, &time[i].s, &time[i + 1].h, &time[i + 1].m, &time[i + 1].s);
            fprintf(fin,"%d\t%d\t%d\t%d\t%d\t%d\n", time[i].h, time[i].m, time[i].s, time[i + 1].h, time[i + 1].m, time[i + 1].s);
        }

    }
    fclose(fin);

    fin = fopen("input.txt", "r");

    for(int i = 0; i < n; i++)
    {
        int h1, m1, s1, h2, m2, s2;

        fscanf(fin,"%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);

        int t1 = (h1 * 60) + m1 + (s1 / 60);
        int t2 = (h2 * 60) + m2 + (s2 / 60);

        if(t1 > t2)
        {
            fprintf(fout,"%d\n", t1 - t2);
        }
        else if(t1 < t2)
        {
            fprintf(fout,"%d\n", t2 - t1);
        }
        else
        {
            if(t1 > t2)
        {
            fprintf(fout,"%d\n", 0);
        }

    }

    fclose(fin);
    fclose(fout);

}
