#include <stdio.h>

int main(void){
	char car_num_str[8] = "A23456";

	printf("check whether your car number is retricted today.\n");
	printf("Enter a car number:");
	scanf("%s", car_num_str);
	printf("car num is: %s\n", car_num_str);



	return 0;
}
