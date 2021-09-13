#include <stdio.h>

int main(void){
	int i = 0;
	int sum = 0;

	//for(i=0; i<=100; i++, i++){
	//for(i=0; i<=100; i=i+2){
	//for(i=0; i<=100; i+=2){
	for(i=0; i<=100; i++){
		if(i%2 == 1)
			continue;
		//if(i%2 == 0)
			sum += i;
	}

	printf("sum=%d\n", sum);
	return 0;
}
