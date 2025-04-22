#include<stdio.h>
int main(){
    int cinema[2][3][4] = {
        // Hall 1
        {
            // Column
            {0, 1, 2, 3},// Row
            {4, 5, 6, 7},
            {8, 9, 10, 11}
        },
        // Hall 2
        {
            {12, 13, 14, 15},
            {16, 17, 18, 19},
            {20, 21, 22, 23}
        }
    };

    for(int hall = 0; hall <2 ; hall++)// Loop in Hall
        {
            printf("Hall : %d \n", hall);
            for(int row=0;row<3;row++){// Loop in Row
                printf("Row : %d   ", row);
                for(int column=0;column<4;column++){ // Loop in column
                    printf("Column %d: %d \t", column, cinema[hall][row][column]);
                }
                printf("\n");
            }
            printf("\n");
        }
    return 0;
}