#include <stdio.h>

struct test{
	int n;
	char test[4];
};

union test2 {
	int n;
	unsigned char test[4];
	float f;
};

typedef union test2 test2_t;

int main(void){

	test2_t t;
	
	printf("big end or little end.\n");

	printf("sizeof struct test=%ld\n", sizeof (struct test));
	//printf("sizeof union test2=%ld\n", sizeof (union test2));
	printf("sizeof union test2=%ld\n", sizeof (test2_t));


	/*
	t.n = 0x12345678;

	printf("test[0]=%x\n", t.test[0]);
	printf("test[1]=%x\n", t.test[1]);
	printf("test[2]=%x\n", t.test[2]);
	printf("test[3]=%x\n", t.test[3]);
	*/

	/*
	t.f = 1.0;
	printf("test[0]=%x\n", t.test[0]);
	printf("test[1]=%x\n", t.test[1]);
	printf("test[2]=%x\n", t.test[2]);
	printf("test[3]=%x\n", t.test[3]);
	*/

	t.n = 0x3f800000;
	printf("t.f=%.1f\n", t.f);


	
	return 0;
}
