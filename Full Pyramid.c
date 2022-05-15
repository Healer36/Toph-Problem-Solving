#include <stdio.h>

int main()
{
    int i, j, k, n;
    scanf("%d",&n);
    for (i = 1; i <= n; i++) // control loop over whole programme
    {
        for (j = 1; j <= (n - i); j++) // control over space, check first line that has exactly the number of spaces as number we are taking inputs
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++) // Now we are printing the stars, we control the programme as variable i continues up to k
        {
            if (k == i)
                printf("*");
            else
                printf("* ");
        }
        printf("\n");
    }
    
    return 0;
	}
