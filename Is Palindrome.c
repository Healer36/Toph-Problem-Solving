#include <stdio.h>
#include <sring.h>

int main()
{
    char ch1[100];
    int i=0,count,count2,k;

    scanf("%s",&ch1);
    count = strlen(ch1);
    k = count;




    for(i=0; i <= k-1 ; i++,count--)
    {
        if (ch1[i] != ch1[count-1])
        {
            printf("No\n");
            return 0;

        }


    }

    printf("Yes\n");




    return 0;
}
