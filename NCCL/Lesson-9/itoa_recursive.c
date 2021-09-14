#include <stdio.h>

void itoa(int num, char buf[10], int i){
	if(num == 0){
		buf[i] = '0';
		buf[i+1] = '\0';
		return;
	}else{
		buf[i] = (num % 10) + 48;
		num = num / 10;
		i = i+1;
		if(num == 0){
			buf[i] = '\0';
			return;
		} 
		itoa(num, buf, i);
	}
}

int main(void){
	int num = 0;
	char buf[10];
	int i = 0;

	printf("Enter a number:\n");
	scanf("%d", &num);
	printf("num=%d\n", num);

	itoa(num, buf, i);

	printf("buf=%s\n", buf);

	return 0;
}
