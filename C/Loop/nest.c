// #include<stdio.h>
// int main(){
//     system("cls");
//     int i,j;

//     for ( i = 1;i<5;i++){ 
//         printf("%d /",i);    
//         for ( j = 1;j<5;j++){ 
//             printf("%d ",j); 
//         }
//         printf("\n");
//     }


//     return 0;
// }
/*

#include<stdio.h>
int main(){
    system("cls");
    int row,column,i,j;
    printf("\033[32mEnter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&column);


    for(i = 1; i <= row;i++){
        printf("\033[31m[%d] | ", i);
        for(j = 1; j <= column;j++){
            printf("\033[32m[%d]", j);
        }

        printf("\n");

    }
    printf("\033[0m");


}

*/


#include<stdio.h>
int main(){
    int start,end;
    printf("Enter a number for starting : ");
    scanf("%d", &start);
    printf("Enter a number for ending : ");
    scanf("%d", &end);

    for (int i = 1; i<=10;i++){
        for (int j = start; j <= end; j++){
            printf("%d * %d = %d",j,i,j*i);
            printf("\t");
        }
        printf("\n");
    }

    
}