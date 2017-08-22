#include <stdio.h>
 
int main() 
{
    int size, factorial = 1, i;
 
    printf("Enter the number\n");
    scanf("%d",&size);

    for ( i = size; i >= 1; i--) 
    {
        factorial = factorial * i;
    } 
 
    printf("Result = %d.\n", factorial);
    return 0;
}
