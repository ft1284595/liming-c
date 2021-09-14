#include <stdio.h>

int main(void){

	printf("count 9 from 1~100\n");

	int i = 0;
	int counter = 0;
	int num = 0;
	int sum = 0;
	int user_input = 0;

	printf("enter a numbre, please.\n");
	scanf("%d", &user_input);

	for(i=1; i<=user_input; i++){
		num = i;
		counter = 0;
		while(num != 0){
			if(num % 10 == 9){
				counter++;
			}
			num = num / 10;
		}
		sum += counter;
#if DEBUG		
		printf("%d, counter=%d\n", i, counter);
#endif
	}

	printf("sum = %d\n", sum);

	return 0;
}
