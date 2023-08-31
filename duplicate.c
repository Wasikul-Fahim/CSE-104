#include <stdio.h>

int main()
{
    int n, i, j, count;

    // Ask user for number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n],freq[n];

    // Initialize frequency array
    for (i = 0; i < n; i++)
    {
        freq[i] = -1;
    }


    // Input elements
    printf("Enter elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    count = 0;
    // Calculate frequency
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (freq[i] != 0)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    freq[j] = 0;  // Make sure not to count this element again
                }
            }
        }
    }

    printf("Number of duplicates is %d \n", count);
    return 0;
}
