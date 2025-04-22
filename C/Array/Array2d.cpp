//#include<stdio.h>
//
//int main(){
//	
//	// Array 2D
//	// Syntax : DataType ArrayName[sizerow][sizecolumn];
//	// Example int a[2][3];
//	
//	int a[2][3] = {
//					{0,1,2},// row 0 column 2
//					{3,4,5} // row 1 column 1
//				  };
//	char name[2][3][100] = {
//							{"Hi","Hello","Hey"},
//							{"Bye","Good Bye","Bye Bye"}
//						   };
//	
//	for (int i=0;i<2;i++){  // loop run row
//		printf("row [%d] : \n",i);
//		for(int j=0;j<3;j++){   // loop run column
//			printf("%d\t",a[i][j]);
//			printf("%s",name[i][j]);
//			printf("\n");
//		} 
//		printf("\n");
//	}
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>

#define bisque     "\033[48;2;255;228;196m" //  rgb = RED GREEN BLUE
#define DEEPPINK   "\033[5;3;38;2;255;20;147m"
#define BLUE       "\033[34m"   // Color BLUE
#define SUCCESS    "\033[38;2;124;252;0m"   // Color GREEN
#define RED        "\033[31m"   // Color RED
#define CYAN       "\033[36m"
#define PURPLE     "\033[35m"
#define YELLOW     "\033[33m"   // Color YELLOW
#define RESET      "\033[0m"    // Color RESET

const int ROWS = 5; // const can't change value
const int COLUMS = 5;
int i,j;

// Pass By Array
void ViewSeat(char seat[ROWS][COLUMS]){
	printf("===========================================================\n");
	for(i=0;i<ROWS;i++){
		printf("\t\t\t");
		for(j=0;j<COLUMS;j++){
			if(seat[i][j]=='0'){
				printf(SUCCESS"%c ",seat[i][j]);
				printf(RESET);
			}else{
				printf(RED"%c ",seat[i][j]);
				printf(RESET);
			}
		}
		printf("\n");
	}
}

void BookedSeat(char seat[ROWS][COLUMS]){
	int col,row;
	printf("===========================================================\n");
	printf("=> Enter row [0-4] : ");scanf("%d",&row);
	printf("=> Enter column [0-4] : ");scanf("%d",&col);
	printf("===========================================================\n");
	
	if(row>=0 && row<ROWS && col>=0 && col<COLUMS){
		if(seat[row][col]=='0'){
			seat[row][col]='X';
			printf(SUCCESS"                     [ Success  ]             \n");
			printf(RESET);
		}else{
			printf(YELLOW"                   Seat is Booked             \n");
			printf(RESET);
		}
	}else{
		printf(RED"      Invalid Seat          \n");
		printf(RESET);
	}
	
	
}


int main(){
	system("cls");
	char seat[ROWS][COLUMS];
	int op;
	// Change value seat
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMS;j++){
			seat[i][j]='0';
		}
	}
	do{
		system("cls");	
		printf(DEEPPINK"===========================================================\n");
		printf("                         Movie System                      \n");
		printf("===========================================================\n");
		printf("[ 1. Views Seat                                            \n");
		printf("[ 2. Booked Seat                                           \n");
		printf("[ 0. Exit Program                                          \n");
		printf("===========================================================\n");
		printf("Choose an option : ");scanf("%d",&op);
		printf(RESET);
		switch(op){
			case 1 :{
				ViewSeat(seat);
				system("pause");
				break;
			}
			case 2 :{
				BookedSeat(seat);
				system("pause");
				break;
			}
			case 0 : {
				printf(CYAN"===========================================================\n");
				printf("                         Exit Program                      \n");
				printf("===========================================================\n");
				break;
			}
		}
		
	}while(op!=0);
	
	return 0;
}


