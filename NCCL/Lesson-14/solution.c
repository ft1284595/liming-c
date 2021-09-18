#include <stdio.h>
#include <stdlib.h>

#define ROW 10
#define COL 10

struct direction {
	int dr; 		//dirction row
	int dc;			//direction col
	char dname[8];		//direction name, eg: up, down left, right
};

typedef struct direction dir_t;

dir_t directions[4] = {
	{-1, 0, "up"},	
	{1, 0, "down"},
	{0, -1, "left"},
	{0, 1, "right"}
};

int chessboard[ROW][COL];

void init_chessboard(){
	int i = 0;
	int j = 0;
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			chessboard[i][j] = rand() % 2;
		}
	}
}

void print_chessboard(){
	int i = 0;
	int j = 0;
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			printf("%d ", chessboard[i][j]);
		}
		putchar('\n');
	}
}

int isValid(int r, int c){
	if(r<0 || r>=ROW){
		return 0;
	}
	if(c<0 || c>=COL){
		return 0;
	}

	return 1;
}

int checkAvailableWays(int r, int c){
	int ways = 0;
	int i = 0;
	int newRow = -1;
	int newCol = -1;
	for(i=0; i<4; i++){
		newRow = r + directions[i].dr;
		newCol = c + directions[i].dc;
		if(isValid(newRow, newCol)){
			if(chessboard[newRow][newCol] == 0){
				ways ++;
				printf("%s direction is available.\n", directions[i].dname);
			}
		}
	}
	/*
	//up
	if(isValid(r-1, c)){
		//printf("----------------up(%d,%d)=%d\n", r, c-1, chessboard[r][c-1]);
		if(chessboard[r-1][c] == 0){
			ways++;
			printf("up direction is available.\n");
		}
	}
	//down 
	if(isValid(r+1,c)){
		if(chessboard[r+1][c] == 0){
			ways++;
			printf("down direction is available.\n");
		}
	}
	//left
	if(isValid(r, c-1)){
		if(chessboard[r][c+1] == 0){
			ways++;
			printf("left direction is available.\n");
		}
	}
	//right
	if(isValid(r, c+1)){
		if(chessboard[r][c+1] == 0){
			ways++;
			printf("right direction is available.\n");
		}
	}
	*/
	return ways;
}

int main(void){

	int r;	//row
	int c;	//colum

	printf("demo chessboard.\n");
	init_chessboard();
	print_chessboard();
	while(1){
		int count = 0;
		printf("Enter a position row,column.\n");
		scanf("%d,%d", &r, &c);
		if(!isValid(r, c)){
			continue;
		}

		printf("the position you entered is (%d,%d), it's value=%d\n", r, c,chessboard[r][c]);

		count = checkAvailableWays(r, c);

		printf("there are %d directions available for position(%d,%d)\n", count, r, c);

	}

	


	return 0;
}
