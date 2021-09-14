#include <stdio.h>

enum day_of_week {
	MONDAY = 1,
	TUESDAY = 2,
	WEDNESDAY,		
	THURSDAY = 4,
	FRIDAY = 5,
	SATURDAY = 6,
	SUNDAY

};

int getTailNum(char car_num_str[]){
	int i = 0;
	int tailNum = 0;

	while(car_num_str[i] != 0){
		tailNum = car_num_str[i] - '0';
		i++;
	}


	return tailNum;
}

enum day_of_week calcToday(int year, int month, int day){
	// 2021-01-01 --> Friday
	int m[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int origin = FRIDAY;
	int i = 0;
	int allDays = 0;
	int ret = -1;
	for(i=1; i<month; i++){
		allDays = allDays + m[i-1];
	}

	allDays += day-1;
	printf("allDays=%d\n", allDays);

	switch((allDays + origin) % 7){
		case 0:
			ret = SUNDAY;
			break;
		case 1:
			ret = MONDAY;
			break;
		case 2:
			ret = TUESDAY;
			break;
		case 3:
			ret = WEDNESDAY;
			break;
		case 4:
			ret = THURSDAY;
			break;
		case 5:
			ret = FRIDAY;
			break;
		case 6:
			ret = SATURDAY;
			break;
	}	


	
	return ret;
}

int checkRestrict(int tail_num, enum day_of_week today){
	int ret = -1;
	
	switch  (tail_num){
		case 0:
		case 5:
			if(today == MONDAY){
				ret = 1;
			}else{
				ret = 0;
			}
			break;
		case 1:
		case 6:
			ret = (today == TUESDAY) ? 1 : 0;
			break;
		case 2:
		case 7:
			ret = (today == WEDNESDAY) ? 1 : 0;
			break;
		case 3:
		case 8:
			ret = (today == THURSDAY) ? 1 : 0;
			break;
		case 4:
		case 9:
			ret = (today == FRIDAY) ? 1 : 0;
			break;
		default:
			ret = 0;
	}
	
	return ret;
}

int main(void){
	char car_num_str[8] = "A23456";
	int tail_num = 0;
	enum day_of_week today = MONDAY;	
	int limit = -1;

	printf("check whether your car number is retricted today.\n");
	printf("Enter a car number:");
	scanf("%s", car_num_str);
	printf("car num is: %s\n", car_num_str);
	
	tail_num = getTailNum(car_num_str);

	today = calcToday(2021,9,14);
	printf("today is day %d\n", today);
	
	limit = checkRestrict(tail_num, today);

	if(limit == 1)
		printf("your car num is restricted today.\n");
	else if(limit == 0)
		printf("your car num is NOT restricted today.\n");
	else
		printf("this is a bug for this program, check it.\n");
	

	return 0;
}

