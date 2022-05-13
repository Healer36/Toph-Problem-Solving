#include <stdio.h>




int main() {
    char str1[100],str2[100];
    scanf("%s%s",&str1,&str2);

    int count=0;

    int i,j;
    for (i=0; str1[i] != '\0' ;i++){
        for (j=0; str2[j] != '\0' ;j++){
            if (str1[i] == str2[j]){
                count++;
            }
        }
    }
    if (count == strlen(str1)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

	return 0;
}
