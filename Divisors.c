#include <stdio.h>




int main() {
    int num;
    scanf ("%d",&num);

    int i=1;

    for (i; i<=num ;i++){
        if (num%i==0){
            printf("%d\n",i);
        }
    }

	return 0;
}
