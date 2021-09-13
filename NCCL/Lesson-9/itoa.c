#include <stdio.h>

int main(void){

	int num = 0;
	char buf[10];
	int i = 0;
	int j = 0;
	char tmp;

	printf("Enter a number:\n");
	scanf("%d", &num);
	printf("num=%d\n", num);

	do{
		buf[i] = (num % 10) + '0';
		i = i + 1;
		num = num / 10;
	}while(num != 0);
	buf[i] = '\0';

	/* revert buf */
	for(j=0; j<i/2; j++){
		tmp = buf[i-1-j];
		buf[i-1-j] = buf[j];
		buf[j] = tmp;	
	}

	printf("buf=%s\n", buf);
	return 0;
}
