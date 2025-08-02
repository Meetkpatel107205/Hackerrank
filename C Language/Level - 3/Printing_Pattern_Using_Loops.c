#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    
    for(int i = 0; i < ((2*n) - 1); i++)
    {
        for(int j = 0; j < ((2*n) - 1); j++)
        {
            int top = i;
            int left = j;
            int right = ((2*n) - 2) - i;
            int down = ((2*n) - 2) - j;
            
            printf("%d ", (n - min(min(top, down), min(left, right))));
        }
        printf("\n");
    }
    return 0;
}