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
const int ROWS = 5; // const can't change value
const int COLUMS = 5;
int i,j;

void ViewSeat(char seat[ROWS][COLUMS]){
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMS;j++){
			printf("%c ",seat[i][j]);
		}
		printf("\n");
	}
}

void BookedSeat(char seat[ROWS][COLUMS]){
	int col,row;
	printf("Enter row [0-4] : ");scanf("%d",&row);
	printf("Enter column [0-4] : ");scanf("%d",&col);
	
	if(row>=0 && row<ROWS && col>=0 && col<COLUMS){
		if(seat[row][col]=='0'){
			seat[row][col]='X';
			printf("\nSuccess !!\n");
		}else{
			printf("\nSeat is Booked !!\n");
		}
	}else{
		printf("\n Invalid Seat\n");
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
				
		
		printf("** Movie System **\n");
		printf("1. Views Seat \n");
		printf("2. Booked Seat\n");
		printf("Choose an option : ");scanf("%d",&op);
		switch(op){
			case 1 :{
				ViewSeat(seat);
				break;
			}
			case 2 :{
				BookedSeat(seat);
				break;
			}
		}
		
	}while(op!=0);
	
	return 0;
}


