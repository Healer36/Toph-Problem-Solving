#include <stdio.h>




int main() {
    int n;
    scanf("%d",&n);
    int n2,n3;



    if(0<n<50){
           int n1=1,n2=1;
    int i;
      
    if (n==1 || n == 2){
        printf("1\n");
    }


    if (n>2){

    for (i=3 ; i<=n ; i++){
        n3 = n1 + n2;
        n1 = n2 ;
        n2 = n3 ;

    }
     printf("%d\n",n3);
    }



    }

	return 0;
}
