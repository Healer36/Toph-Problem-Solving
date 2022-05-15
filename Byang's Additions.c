#include <stdio.h>

int main(){
    long long int num1,num2;
    scanf("%lld%lld",&num1,&num2);

    long long int a,b,sum;
    while (num1 != 0 || num2 !=0){
        a= num1%10;
        b= num2%10;
        sum = a+b;
        if (sum>9){               // if sum is greater than 10 then there will be some kind of reminder
            printf("Yes\n");
            return 0;
        }
        num1 = num1/10;
        num2 = num2/10;
    }
    printf("No\n");

    return 0;

}
