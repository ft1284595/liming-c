#include <stdio.h>

int main(void){

	/*
	char c = '0';
	printf("c=%x\n", c);
	*/

	char c[8] = "a23456";
	printf("c[5]=%x\n", c[5]);
	printf("c[5]=%d\n", c[5]-'0');

	return 0;
}
