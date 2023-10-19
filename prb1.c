#include<stdio.h>


int main()
{
   int a;
   scanf("%d", &a);

   int nums[a];

   int *p;



   for(int i = 0; i < a; i++)
   {
       scanf("%d", &nums[i]);
       p = &nums[i];
       printf("%d %p\n", *p, p);

   }




  return 0;
}
