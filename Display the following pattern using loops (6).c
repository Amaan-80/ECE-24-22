#include <stdio.h>
int main() 
{
    int rows = 4;
    int i;
    for ( i = 1; i <= rows; i++) 
	{
		int j;
        for ( j = i; j < rows; j++) 
		{
            printf(" ");
        }
        int k;
        for ( k = 1; k <= i; k++) 
		{
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
