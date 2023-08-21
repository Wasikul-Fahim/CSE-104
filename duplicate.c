#include <stdio.h>

int main() 
{
    int n, i, j;
    
    // Ask user for number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n], dupli[n];
    
    // Initialize frequency array
    for (i = 0; i < n; i++) 
    {
        dupli[i] = 0;
    }
    
    // Input elements
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate frequency
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                arr[j] = 0;  // Make sure not to count this element again
            }
        }
    }

    // Display frequency
    for (i = 0; i < n; i++) 
    {
        if (arr[i] != 0) 
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
