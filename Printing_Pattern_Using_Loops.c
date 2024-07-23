/*
Sample input n=5
sample output
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);  // Read the input value for 'n'
  	// Complete the code to print the pattern.

    int val;

    // Print the top half of the pattern
    for(int i = 0; i < n; i++)
    {
        val = n;
        for(int j = 0; j < (n * 2) - 2; j++)
        {
            if(j < i)
            {
                // Print decreasing values from 'n' to 'n - i'
                printf("%d ", val);
                val--;
                continue;
            }
            // Print the middle part of the row with 'val' repeated
            for(int k = 0; k < (val * 2) - 1; k++)
            {
                printf("%d ", val);
                j++;
            }
            // Print increasing values from 'val + 1' back to 'n'
            while(val < n)
            {
                val++;
                j++;
                printf("%d ", val);
            }
        }
        printf("\n");  // Move to the next row
    }
    //****************************************//
    // Print the bottom half of the pattern
    for(int i = n - 1; i > 0; i--)
    {
        val = n;
        for(int j = 1; j < (n * 2) - 1; j++)
        {
            if(j < i)
            {
                // Print decreasing values from 'n' to 'n - i'
                printf("%d ", val);
                val--;
                continue;
            }
            // Print the middle part of the row with 'val' repeated
            for(int k = 0; k < (val * 2) - 1; k++)
            {
                printf("%d ", val);
                j++;
            }
            // Print increasing values from 'val + 1' back to 'n'
            while(val < n)
            {
                val++;
                j++;
                printf("%d ", val);
            }
        }
        printf("\n");  // Move to the next row
    } 
    return 0;
}
