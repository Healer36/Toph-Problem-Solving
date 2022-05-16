#include <stdio.h>
#include <math.h>

int main() {
	int num;
	scanf("%d",&num);
	int i;
	int a,result=0;
	for (i=1; i<=num ;i++){
		a = pow(i,2);
		result += a;
	}
	printf("%d",result);
	
	return 0;
}
