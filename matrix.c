#include <stdio.h>

int main() 
{
    int i, j, n, sum = 0;
    
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {    
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of main diagonal elements
    for (i = 0; i < n; i++) 
    {
        sum += matrix[i][i];
    }

    // Display the sum
    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
