#include <stdio.h>


int main()
{
          int year;
          scanf("%d",&year);

          if(0< year <9999){


          if (year%4==0 && year%400 != 0){
                    printf("Yes\n");         //According to question A leap year occurs when the year is a multiple of 4 but not a multiple of 400.
                    return 0;
          }

                    printf("No\n");
          }


    return 0;
}
