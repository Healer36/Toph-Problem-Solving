#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char pass[20];
    gets(pass);
    if(pass[0] >= 'a' && pass[0] <= 'z') {
        pass[0] = pass[0] - 32;
        printf("%c",pass[0]);
    }

    int l = strlen(pass), i;

    for(i = 1; i < l; i++) {
        if(pass[i] == 'i') {

             printf("!");
        }
        else if(pass[i] == 's') {

             printf("$");
        }
        else if(pass[i] == 'o') {
             printf("()");
        }
        else{
            printf("%c",pass[i]);
        }

    }

        printf(".\n");

   	return 0;
}
