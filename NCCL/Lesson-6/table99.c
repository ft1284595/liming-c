#include <stdio.h>

//#define PRINT(x)	printf("<debug> "#x"=%d\n", x);
#define PRINT(x) 

int main(void){

	int i = 0;
	int j = 0;

	for(i=1; i<=9; i++){
		PRINT(i);
		for(j=1; j<=i; j++){
			PRINT(j);
			printf("%d*%d=%d\t", j, i, (i*j));
		}
		printf("\n");
	}

	return 0;
}
