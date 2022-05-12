#include <stdio.h>

int main()
{
int n, t1, t2, t3;


scanf("%d", &n);
if (0>n || n>=200000000){
return 0;
}
if (n >999999){
	t1 = n%1000;
	n /= 1000;
	t2 = n%1000;
	t3 = n/1000;
	printf("%d,%03d,%03d\n", t3,t2,t1);   //%03d means if we got 1000 as input it will print "1,000"..else it'll print "  0" only.
}
else if (n > 999){
	t1 = n%1000;
	n /= 1000;
	t2 = n%1000;
	
	printf("%d,%03d\n", t2,t1);
}
else {
	t1 = n%1000;
	printf("%d\n", t1);
}




return 0;
}
