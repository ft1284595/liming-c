#include <stdio.h>
void printArr(int arr[], int length);

void josephArr(int arr[], int length){
	int arr2[length];
	int i = 0;
	int j = 0;
	for(i=0; i<length; i++){
		if(i+1 % 3 == 0){
			continue;
		}
		arr2[j] = arr[i];
		j++;
	}	
	printArr(arr2, length);
}

void printArr(int arr[], int length){
	int i = 0;
	printf("arr=[");
	for(i=0; i<length; i++){
		if(i==length-1){
			printf("%d]", arr[i]);
		}else{
			printf("%d,", arr[i]);
		}
	}

	printf("\n");
}

int main(void){

	int arr[6] = {1,2,3,4,5,6};
	int length = sizeof(arr) / sizeof(int);
	int i = 0;

	printArr(arr, length);

	josephArr(arr, length);

	

	return 0;
}
