#include <stdio.h>

int main() 
{
    int n, i, j, count;
    
    // Ask user for number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n], freq[n];
    
    // Initialize frequency array
    for (i = 0; i < n; i++) {
        freq[i] = -1;
    }
    
    // Input elements
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate frequency
    for (i = 0; i < n; i++) 
    {
        count = 1;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
                freq[j] = 0;  // Make sure not to count this element again
            }
        }

        if (freq[i] != 0) 
        {
            freq[i] = count;
        }
    }

    // Display frequency
    for (i = 0; i < n; i++) 
    {
        if (freq[i] != 0) 
        {
            printf("%d |", arr[i]);
            for (j = 0; j < freq[i]; j++)
            {
                printf("x ");
            }
            printf("\n");
        }
    }

    return 0;
}
