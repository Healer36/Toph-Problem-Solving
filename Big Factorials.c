#include <stdio.h>
void factorial(long long int num);

int main(){
    long long int num;
    scanf("%lld", &num);
    
    factorial(num);
    
    
    return 0;
}

void factorial(long long int num){
	long long int i, count=1;
	
    if(num>=20) {
        printf("0000\n");
    }
    else {
		scanf("%lld", &num);
        for(i=1; i<=num; i++) {
            count=count*i;
        }
        if(count%10000>=0 && count%10000<=9) {
            printf("000%lld\n", count%10000);
        }
        else if(count%10000>=10 && count%10000<=99) {
            printf("00%lld\n", count%10000);
        }
        else if(count%10000>=100 && count%10000<=999) {
            printf("0%lld\n", count%10000);
            }
        else if(count%10000>999) {
        printf("%lld\n", count%10000); }
    }

	}
