#include <stdio.h>

int fact(int num);

int main (void)
{
    int n;
    printf("Size of Array : ");
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        int o = fact(nums[i]);
        nums[i] = o;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }


}

int fact(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else
    {
        int sum = num * fact(num - 1);
        return sum;
    }

}
